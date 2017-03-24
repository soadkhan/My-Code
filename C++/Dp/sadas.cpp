#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

// file input and output
#define read          freopen("in.txt","r",stdin)
#define write         freopen("ou.txt","w",stdout)

struct block{
    ll a  ;
    ll b  ;
    ll h  ;
};

block lists[40] ;
ll n  ;
ll dp[10010][10010]  ;
ll fun(ll l , ll w ){
    if(dp[l][w] != -1 && l<10000 && w<10000) return dp[l][w] ;
    ll ret = 0 ;
    for(ll i  = 0 ; i< n ; i++){
        ll l1 = max(lists[i].a , lists[i].b) ;
        ll w1 = min(lists[i].a , lists[i].b) ;
        if(l1 < l && w1 < w) ret = max(ret  , lists[i].h + fun( l1 , w1 )) ;

        ll l2 = max(lists[i].a , lists[i].h) ;
        ll w2 = min(lists[i].a , lists[i].h) ;
        if(l2 < l && w2 < w) ret = max(ret  , lists[i].b + fun(l2 , w2 )) ;

        ll l3 = max(lists[i].h , lists[i].b) ;
        ll w3 = min(lists[i].h , lists[i].b) ;
        if(l3 < l && w3 < w) ret = max(ret  , lists[i].a + fun( l3 , w3 )) ;
    }
    if(l<10000 && w<10000) dp[l][w] = ret ;
    return ret ;
}

int main(){
    read ;
    write ;
    ll cases = 0 ;
    while(4){
        scanf("%lld" , &n) ;
        if(n==0) break ;
        memset(dp , -1, sizeof(dp)) ;
        cases++ ;
        for(ll i = 0 ; i< n ; i++)
            scanf("%lld%lld%lld", &lists[i].a , &lists[i].b , &lists[i].h) ;
        printf("Case %lld: maximum height = %lld\n" , cases , fun(LONG_LONG_MAX, LONG_LONG_MAX)) ;
    }
    return 0;
}

