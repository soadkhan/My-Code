#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

int main(){
    string ara[1000] ;
    ll n  ;
    cin>>n ;
    ll ans  = 0;
    for(ll i = 0  ; i<n ;i++)
        cin>>ara[i] ;

    for(ll i = 0  ; i<n; i++){
        ll a= 0 ;
        for(ll j  = 0 ; j<n ;j++){
            if(ara[i] == ara[j])  a++ ;
        }
        ans  =  max(ans  , a) ;
    }

    cout << ans <<endl;
    return 0 ;
}

