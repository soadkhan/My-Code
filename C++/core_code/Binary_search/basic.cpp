#include<bits/stdc++.h>
using namespace std  ;

typedef long long int ll ;
#define mx  10100
#define inll(a) scanf("%lld" , &a)
#define oull(a) printf("%lld\n" , a) ;

ll ara[mx] ;

void  l_b(ll n , ll val ){
    ll be = 1 , en   =  n  ;
    ll in = -1;
    while(be <= en ){
        ll mid = (be +  en )/2  ;
        if(ara[mid] == val){
            in  =  mid ;
            en  = mid - 1 ;
        }
        else if(ara[mid] > val )
            en = mid-1 ;
        else
            be = mid+1 ;
    }
    if(in!=-1)
        cout<<val<<" found at "<<in<<endl;
    else cout<<val<<" not found"<<endl;
}

int main(){
    ll n  , q ;
    ll cases = 0 ;
    while(cin>>n>>q){
        cases++  ;
        if(n==0 && q==0 )  break;
        printf("CASE# %lld:\n" , cases) ;
        for(ll i =  1 ; i<= n ; i++)
            inll(ara[i]) ;
        sort(ara+1 , ara+n+1) ;
        for(ll i   =  1 ; i<= q ; i++){
            ll a; inll(a)  ;
            l_b(n , a) ;
        }
    }
    return  0 ;
}
