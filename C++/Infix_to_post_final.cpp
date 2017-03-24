#include<bits/stdc++.h>
using namespace std;
class stack_my {  // obossoi char er stack
private:
    char arra[1000];
    int size_st ;
    int max_size ;
public:
    stack_my() {
        size_st = 0;
        max_size = 100;
    }
    char Top() {
        if(size_st==0) cout<<"Upps........ the stack is empty"<<endl;
        else return arra[size_st-1];
        return -1;
    }
    void Push(char data) {
        if(size_st==max_size) cout<<"Upps..... the stack is full"<<endl;
        else arra[size_st++] = data;
    }
    void Pop() {
        if(size_st==0) cout<<"Upps........ the stack is empty"<<endl;
        else size_st--;
    }
    void Show() {
        for(int i=0; i<size_st; i++)
            cout<<arra[i]<<" ";
        cout<<endl;
    }
    bool Is_empty() {
        return (size_st==0)?1:0;
    }
    void Empty() {
        size_st = 0;
    }
};
int isoperator(char e) { // dekhbo operator ki na
    if(e == '+' || e == '-' || e == '*' || e == '/' || e == '%')
        return 1;
    else
        return 0;
}
int priority(char e) { // priority matrik vabe dekha jabe
    int pri = 0;
    if(e == '*' || e == '/' || e =='%')
        pri = 2;
    else {
        if(e == '+' || e == '-')
            pri = 1;
    }
    return pri;
}
void infix_to_post(char *infix,char *postfix) { // eta tei sob kaj korbo
    char *i,*p;
    stack_my X;
    char n1;
    X.Empty();
    i = &infix[0];
    p = &postfix[0];
    while(*i!='\0') {
        while(*i==' ') i++; // jotokhon space ache skip koro
        if( isdigit(*i) || isalpha(*i) ) {
            while( isdigit(*i) || isalpha(*i)) { // jotokhon kono sonkha ba char ache vorte thakbo postfix e
                *p = *i;
                p++;
                i++;
            }
            /*space dibo ekta*/
            *p = ' ';
            p++;
            /*space dear code sesh*/
        }
        if( *i == '(' ) { // bam braket pele stack e push kore dibo
            X.Push('(');
            i++;
        }
        if( *i == ')') { // jokhon dan bracket pabo  stack e bam bracket paoar age porjonto sob pop kore postfix e rakhbo
            n1 = X.Top();
            while( n1 != '(' ) {
                *p = n1;
                p++;
                /*space dear code*/
                *p = ' ';
                p++;
                /*space dear code sesh*/
                X.Pop();
                n1 = X.Top();
            }
            X.Pop();
            i++;
        }
        if( isoperator(*i) ) { // jodi operator pai
            if(X.Is_empty()) X.Push(*i); // jodi stack khali hoy to push kore dibo
            else {
                n1 = X.Top();     // soman ba besi prioritir jara ache tader sobaike pop kore postfix e likhe dibo
                while(!(priority(n1)<priority(*i))) {
                    *p = n1;
                    p++;
                    /*space dibo*/
                    *p = ' ';
                    p++;
                    /*space dea sesh*/
                    X.Pop();
                    if(X.Is_empty()) break; // jodi khali hoe jay to break
                    n1 = X.Top();
                }
                X.Push(*i);
            }
            i++;
        }
    }
    while(!X.Is_empty()) {
        n1 = X.Top();
        *p = n1;
        p++;
        X.Pop();
        /*space dibo*/
        *p = ' ';
        p++;
        /*space dea sesh*/
    }
    *p = '\0';
}
int main(void) {
    char in[50],post[50];
    strcpy(post,""); //postfix dhore nei khali
    printf("Enter Infix Expression : ");
    gets(in);
    infix_to_post(in,post);
    printf("Postfix Expression is : %s\n",post);
    return 0;
}
