#include<bits/stdc++.h>
using namespace std ;

typedef long long ll ;

int main(){
    ll ara[100]  = { 1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
    1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224,
    47045881, 64000000  ,  85766121} ;

    map<ll , ll>lists ;
    for(ll i = 0 ; i<21  ; i++ )  lists[ara[i]]++ ;

    ll a ;
    while(cin>>a){
        if(a==0) break ;
        if(lists[a]) cout<<"Special"<<endl;
        else cout<<"Ordinary"<<endl;
    }



    return 0 ;
}
