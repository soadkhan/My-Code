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


int main(void){
    stack_my jonir;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        jonir.Push(data);
    }
    jonir.Show();
    cout<<"top element"<<jonir.Top()<<endl;
    jonir.Pop();
    jonir.Show();

    return 0;
}
