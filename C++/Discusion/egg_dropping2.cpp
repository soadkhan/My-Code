#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
ll dp[100][100] ;
int main(){
    ll egg , flr;
    cin>>egg>>flr ;
    for(ll i  = 1 ; i <= egg ; i++)
        for(ll j = 0 ; j <= flr ; j++){
            if(i==1) {
                dp[i][j] = j ;
                continue ;
            }
            if(j==0 || j==1){
                dp[i][j] = j ;
                continue ;
            }
            ll se = LONG_LONG_MAX ;
            for(ll k = 1 ; k <= j ; k++){
                se =min(se ,  1 + max( dp[i-1][k-1] , dp[i][j-k] ) ) ;
            }
            dp[i][j] = se;
        }
    cout<<dp[egg][flr]<<endl;
    main() ;
}
