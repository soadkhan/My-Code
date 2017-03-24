#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll;

ll dp[100][100] ;

ll dp_fun(ll egg , ll flr){
    if(dp[egg][flr] != -1) return dp[egg][flr] ;
    if(flr == 0 || flr == 1) return flr ;
    if(egg==1 ) return flr ;
    ll ret =  LONG_LONG_MAX ;
    for(ll i  = 1 ; i  <= flr  ; i++)
        ret=min(ret,1 + max(dp_fun( egg-1 ,i-1 ),dp_fun(egg ,flr-i)));
   return dp[egg][flr] = ret ;
}


int main(){
    memset(dp , -1 , sizeof(dp))  ;
    while(4){
        ll a, b ;
        cin>>a>>b;
        cout<<dp_fun(a , b) <<endl ;
    }
    return 0 ;
}
