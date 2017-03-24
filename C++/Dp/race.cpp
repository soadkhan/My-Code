#include<bits/stdc++.h>
using namespace std ;
typedef long long int  ll ;

vector<ll>primes ;
double dp[1000100] ;
int visited[1000100] ;
double race(ll n){
    if(n==1) return 0.0 ;
    if(dp[n] > -5 ) return dp[n] ;
    ll x = 0  , d = 0  ;
    double ret = 0 ;
    for(ll i = 0 ;;i++){
        if(primes[i] > n) break ;
        x++ ;
        if(n%primes[i]==0){
            d++  ;
            ret+=race(n/primes[i]) ;
        }
    }
    return dp[n] = (((double)x + (double)ret )/ double(d)) ;
}


int main(){
    memset(dp , -10 , sizeof(dp) ) ;
    memset(visited , 0 , sizeof(visited)) ;
    visited[0] = visited[1] = 1 ;
    for(ll i  = 2 ; i<= 1000100 ; i++)
    if(visited[i]==0){
        primes.push_back(i) ;
        for(ll j = i*2 ; j<= 1000100 ; j+=i )
            visited[j] = 1  ;
    }
    ll n  , cases = 0 ;
    cin>>n ;
    while(n--){
        ll i ; cin>>i ;
        cases++ ;
        printf("Case %lld: %.9lf\n" , cases , race(i)) ;
    }


    return 0 ;
}
