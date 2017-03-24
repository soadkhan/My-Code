#include<bits/stdc++.h>
using namespace std ;
typedef long long int  ll ;
#define inll(a) scanf("%lld" , &a)

ll dp[24][10100] ;
ll ara[25] ;
ll fun(ll i  , ll sum){
    if(dp[i][sum] != -1) return dp[i][sum] ;
    if(i>=21){
        if(sum == 0 ) return 1 ;
        else return 0 ;
    }
    ll ret1 = 0 , ret2  = 0 ;
    if(sum  - ara[i] >= 0 ) ret1 = fun(i , sum - ara[i]) ;
    ret2 = fun(i+1  , sum) ;
    return dp[i][sum] = ret1+ret2 ;
}

int main(){
    memset(dp , -1 , sizeof(dp)) ;
    for(ll i = 0  ; i<= 21 ; i++)
        ara[i]  = (i+1)*(i+1)*(i+1)  ;
    ll a;
    while(cin>>a)
        cout<<fun(0 , a)<<endl;

    return 0  ;
}
