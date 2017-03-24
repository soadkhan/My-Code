#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

int main(){
    string str ;
    cin>>str ;
    for(ll i = 0 ; i<8 ; i++)
    if(str[i] ==  '?'){
        cout<<"No"<<endl;
        return 0 ;
    }

    cout<<"Yes"<<endl;


    return 0 ;
}
