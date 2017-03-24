#include<bits/stdc++.h>
using namespace std ;

typedef long long int  ll   ;
#define inll(a) scanf("%lld" , &a)
#define indb(a) scanf("%lf" , &a)
#define oull(a) printf("%lld\n" , a)
#define oudb(a) printf("%.6lf\n" , a)

int main(){
    ll tests ;
    inll(tests) ;
    for(ll cases = 1 ; cases <= tests ; cases++){
        ll n ; inll(n)  ;
        printf("Case %lld:" , cases) ;
        for(ll i = 1 ; i<= n ; i++){
            double g = 0.0  , a;
            for(ll j = 1 ; j<= n ; j++ ){
                indb(a) ; g+=a ;
            }
            if(n!=1 ) printf(" %.6lf" , g/(n-1)) ;
            else printf(" 1.000000") ;
        }
        printf("\n") ;
    }
}
