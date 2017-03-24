#include<bits/stdc++.h>
using namespace std ;

typedef long long int  ll ;
#define inll(a) scanf("%lld" , &a)
#define mod 100000007
ll dp[100][1010] ;
ll ara[100] ;
ll am[100] ;
ll n , k ;

ll fun(ll i , ll sum){
    if(i>=n ){
        if(sum==k) return 1 ;
        else return 0 ;
    }
    if(dp[i][sum]!=-1) return dp[i][sum] ;
    ll ret = 0  ;
    for(ll j = 1 ; j<= am[i] ; j++){
        if(sum + ara[i]*j <= k )
            ret+= fun(i+1 , sum+(ara[i]*j)) % mod ;
        else break ;
    }
    ret+= fun(i+1 , sum) % mod ;
    return dp[i][sum]  = ret%mod ;
}

int main(){
    ll test , cases = 0 ;
    inll(test) ;
    for(cases = 1 ; cases <= test ; cases++){
        inll(n) ; inll(k) ;
        memset(dp , -1 , sizeof(dp)) ;
        for(ll i = 0 ; i < n ; i++)
            inll(ara[i]) ;
        for(ll i  = 0 ; i< n ; i++)
            inll(am[i]) ;
        printf("Case %lld: %lld\n" , cases , fun(0 , 0)%mod) ;
    }

    return 0 ;
}
