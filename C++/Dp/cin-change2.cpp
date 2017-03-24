#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

#define mod 100000007
#define inll(a) scanf("%lld" , &a)
#define oupr(c , a) printf("Case %lld: %lld\n" , c , a)

ll ara[100] ;
ll tak[100] ;
ll dp[1100][1010][100];
ll n  , k ;

ll fun(ll i , ll sum , ll taken ){
    if(i>=n){
        if(sum==k) return 1 ;
        else return 0 ;
    }

    if(dp[i][sum][taken]!=-1)
        return dp[i][sum][taken] ;

    ll ret1 = 0 , ret2 = 0 ;

    if(sum + ara[i] <= k && taken < tak[i])
        ret1 = fun(i , sum+ara[i] , ++taken ) ;

    ret2  = fun(i+1 , sum ,  0 ) ;

    return dp[i][sum][taken] = (( (ret1%mod) + (ret2%mod) )%mod) ;

}

int main(){
    ll test  , cases= 0  ;
    inll(test) ;
    for(cases = 1 ; cases<= test ; cases++){
        memset(dp , -1 , sizeof(dp)) ;

        inll(n) ; inll(k) ;

        for(ll i = 0 ; i< n ; i++)
            inll(ara[i]) ;

        for(ll i = 0 ; i< n ; i++)
            inll(tak[i]) ;

        oupr(cases  , fun(0 , 0 , 0)) ;
    }
    return 0 ;
}
