#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;

int main(){
   freopen("inp.txt","rt",stdin);
    lld tests,cases = 0;
    cin>>tests;
    while(tests--){
        cases++;
        cout<<"Case "<<cases<<":"<<endl;
        stack<string>backwo;
        stack<string>forwor;
        string going = "http://www.lightoj.com/";
        string com;
        while(cin>>com){
            if(com=="QUIT") break;
            if(com=="VISIT"){
                backwo.push(going);
                while(forwor.empty()!=true) forwor.pop();
                cin>>going;
                cout<<going<<endl;
            }
            if(com=="BACK"){
                if(backwo.empty()) cout<<"Ignored"<<endl;
                else{
                    forwor.push(going);
                    going = backwo.top();
                    backwo.pop();
                    cout<<going<<endl;
                }
            }
            if(com=="FORWARD"){
                if(forwor.empty()) cout<<"Ignored"<<endl;
                else{
                    backwo.push(going);
                    going = forwor.top();
                    forwor.pop();
                    cout<<going<<endl;
                }
            }
        }
    }
    return 0;
}

