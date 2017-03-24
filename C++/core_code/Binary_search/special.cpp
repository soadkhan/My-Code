#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;
#define inll(a) scanf("%lld" , &a)
#define oull(a) printf("%lld\n" , a)

ll bed , pi , ho ;

ll ser_sum(ll n, ll a, ll d){
    if(n==0) return  0 ;
    if(n > a ) n = a ;
    ll ans = 2*a*n + d*n*n - d*n ;
    ans =  ans/2 ;
    return ans ;
}

bool fun(ll num){
    ll dane_bed =  bed  - ho , bame_bed = ho  - 1 ;
    ll a = num  - 1 ;
    ll chara_mot = ser_sum(bame_bed , a , -1 ) + ser_sum(dane_bed , a , -1)  ;
    if(chara_mot <= pi  - num ) return true ;
    else return false ;
}

int main(){
    inll(bed) ; inll(pi) ; inll(ho) ;

    if(bed == 1){
        cout<<pi<<endl;
        return  0 ;
    }

    pi -= bed ;
    ll lb = 0  , ub  = pi ;

    while(lb < ub){
        ll mid  = lb + (ub - lb + 1)/2 ;
        if(!fun(mid))
            ub  = mid  -1 ;
        else
            lb = mid ;
    }
    oull(lb+1) ;
    return  0 ;
}
