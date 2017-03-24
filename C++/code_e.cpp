#include<bits/stdc++.h>
using namespace std  ;

typedef long long int ll ;

vector<ll>ara[100100] ;

int main(){

    ll n , k , ans = 0;
    cin>> n >> k ;
    for(ll i = 0 ; i<k ; i++){
        ll a ;
        cin>>a ;
        ans  =  ans +  a  - 1;
        for(ll j = 0 ; j <a ; j++){
            ll b ;
            cin>> b ;
            ara[i].push_back(b) ;
        }
    }

/*
    for(ll i = 0 ;i<k ;i++){
        for(ll j = 0 ; j<ara[i].size() ; j++ ){
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;
    }
*/

    ans  = ans +  n - 1 ;

    ll pos ;

    for(ll i = 0 ; i<k ; i++){
        if(ara[i][0] ==  1) {
            pos  = i ;
            break ;
        }
    }

    ll l =  ara[pos].size() ;

    ll minu = 0 ;

    for(ll i = 1 ; i< l ; i++){
        if(ara[pos][i] - ara[pos][i-1] == 1) minu ++ ;
        else break ;
    }




    cout<<ans -  2*minu <<endl ;

    return 0 ;
}
