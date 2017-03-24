#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

ll ara[100]  ;

ll cut_rod( ll n  ){
    if(n <= 0)
        return  0 ;
    ll ret = LONG_LONG_MIN ;
    for(ll i = 1 ; i<= n ; i++)
        ret = max( ret  ,  ara[i] + cut_rod( n - i ) ) ;
    return ret ;
}


ll cut_rod2(ll n ){
    ll dp[100] ;
    dp[0] = 0 ;
    for(ll i = 1 ; i<= n ; i++){
        ll se = LONG_LONG_MIN ;
        for(ll j  =  1 ; j<= i ; j++)
            se = max(se , ara[j] + dp[i - j ]) ;
        dp[i] = se ;
    }
    return dp[n] ;
}

int main(){
    ll n ;
    cin>>n ;
    for(ll i =  1 ; i<= n ; i++)
        cin>>ara[i] ;
    cout<<cut_rod2(n )<<endl;
    return  0 ;
}

