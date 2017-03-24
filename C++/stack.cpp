#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main(){
        stack<int >my;

        int a;
        for(int i=0;i<5;i++){
                cin>>a;
                my.push(a);
        }
        
        my.empty();
        
        while(!(my.empty())){
        	my.pop();
        	cout<<my.size();
        }




        return 0;
}
