#include<bits/stdc++.h>
using namespace std;
class stack_my{
private:
    int arra[1000];
    int size_st ;
    int max_size ;
public:
    stack_my(){
        size_st = 0;
        max_size = 100;
    }
    int Top(){
        if(size_st==0) cout<<"Upps........ the stack is empty"<<endl;
        else return arra[size_st-1];
        return -1;
    }
    void Push(int data){
        if(size_st==max_size) cout<<"Upps..... the stack is full"<<endl;
        else arra[size_st++] = data;
    }
    void Pop(){
        if(size_st==0) cout<<"Upps........ the stack is empty"<<endl;
        else size_st--;
    }
    void Show(){
        for(int i=0;i<size_st;i++)
            cout<<arra[i]<<" ";
        cout<<endl;
    }
    bool Is_empty(){
        return (size_st==0)?1:0;
    }
    void Empty(){
        size_st = 0;
    }
};
bool isOperator(char ch){
    if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
        return true;
    else
        return false;
}
int performOperation(int op1, int op2, char op){
    int ans;
    switch(op){
    case '+':
        ans = op2 + op1;
        break;
    case '-':
        ans = op2 - op1;
        break;
    case '*':
        ans = op2 * op1;
        break;
    case '/':
        ans = op2 / op1;
        break;
    case '%':
        ans = op2 % op1;
        break;
    }
    return ans;
}
int main(){
    char exp[1000], buffer[15];
    int i,op1, op2, len, j, x;
    stack_my s;
    printf("Enter a Postfix Expression: ( e.g. 23 34 * )\n");
    gets(exp);
    len = strlen(exp);
    j = 0;
    for(i=0; i<len;i++){
        if(exp[i]>='0' && exp[i]<='9'){
            buffer[j++] = exp[i];
        }
        else if(exp[i]==' '){
            if(j>0){
                buffer[j] = '\0';
                x = atoi(buffer);
                s.Push(x);
                j = 0;
            }
        }
        else if(isOperator(exp[i])){
            op1 = s.Top();
            s.Pop();
            op2 = s.Top();
            s.Pop();
            s.Push(performOperation(op1, op2, exp[i]));
        }
    }
    printf("Answer is %d\n", s.Top());
    return 0;
}
