#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

#define inll(a) scanf("%lld" , &a)
#define oull(a) printf("%lld\n" ,a )

#define mx 30100
ll ara[mx] ;

int main(){
    ll tests , cases = 0 ;
    inll(tests) ;
    while(tests--){
        cases++ ;
        ll n  , i;
        inll(n) ;
        ll ans = 0 ;
        for(ll i = 0 ; i< n ; i++)
            inll(ara[i]) ;
         stack<ll> st  ;
         i  = 0 ;
         while(i < n){
            if(st.empty() || ara[ st.top() ]  <= ara[i])
                st.push(i++ ) ;
            else{
                ll tp = st.top() ; st.pop() ;
                ll a = ara[tp ] *  (  st.empty() ?  i  : i -  st.top() - 1 ) ;
                ans = max( ans, a) ;
            }
         }
         while(!st.empty()){
            ll tp  = st.top() ; st.pop() ;
            ll a= ara[tp] * ( st.empty() ? i : i - st.top()  - 1  ) ;
            ans = max( ans , a) ;
         }
         printf("Case %lld: " , cases ) ;
         oull(ans) ;
    }

    return  0 ;
}
