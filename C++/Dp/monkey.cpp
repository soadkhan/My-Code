#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define inll(a) scanf("%lld" , &a)

// file input and output
#define read          freopen("in.txt","r",stdin)
#define write         freopen("ou.txt","w",stdout)

ll n ;
ll ara[250][110] ;
ll dp[250][110] ;

bool valid(ll i , ll j ){
    if(j< 0 || i>= 2*n-1  ) return false ;
    if( i< n ){
        if(j <= i) return true ;
        else return false ;
    }
    else{
        i = (  2*(n-1) - i ) ;
        if( j<= i ) return true ;
        else return false ;
    }
}

ll fun(ll i , ll j){
    if(dp[i][j]!=-1) return dp[i][j] ;
    ll ret =   0   ;
    if(i < n-1 ){
        if(valid(i+1  , j+1 )) ret = max(ret , fun(i+1 , j+1)) ;
        if(valid(i+1 , j)) ret  = max(ret , fun(i+1 , j)) ;
    }
    if( i>= n-1){
        if(valid(i+1 , j)) ret = max(ret , fun(i+1 , j)) ;
        if(valid(i+1 , j-1)) ret = max(ret , fun(i+1 , j-1)) ;
    }
    return dp[i][j] =  ara[i][j] + ret   ;
}

int main(){
    ll tests  , cases = 0 ;
    inll(tests) ;
    for(cases = 1 ; cases <= tests ; cases++){
        inll(n) ;
        memset(dp , -1 , sizeof(dp)) ;
        for(ll i = 0  ; i< n ; i++ )
            for(ll j = 0 ; j<= i ; j++)
                inll(ara[i][j]) ;
        for(ll i = n ; i< 2*n-1 ; i++)
            for(ll j  = 0 ; j<= 2*(n-1) - i ; j++)
                inll(ara[i][j]) ;
        printf("Case %lld: %lld\n"  , cases , fun(0, 0)) ;
    }
    return 0 ;
}
