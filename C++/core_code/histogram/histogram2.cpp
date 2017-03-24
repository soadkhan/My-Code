#include<bits/stdc++.h>
using namespace std ;
typedef long long int  ll ;

#define mx 30100
#define inll(a) scanf("%lld" , &a)
#define oull(a) printf("%lld\n" , a)

ll ara[mx]   , tree[3*mx] ;
ll n  ;

map< pair<ll , ll> , ll >pr_pr ;


void init(ll  n , ll be ,ll en){
    if(be==en){
        tree[n] = ara[be] ;
        return  ;
    }
    ll mid  = (be + en)/2 ;
    init(2*n , be , mid) ;
    init(2*n + 1 , mid+1 , en) ;
    tree[n] = min(  tree[2*n] , tree[2*n+1] ) ;
}

ll query(ll n , ll be , ll en , ll i ,ll j ){
    if( i > en || j < be) return LONG_LONG_MAX ;
    if( be>=i && en<=j  ) return tree[n] ;
    ll mid = (be + en)/2 ;
    return min(   query(2*n , be , mid , i , j ) , query( 2*n +1 , mid+1 , en , i , j)  ) ;
}


ll fun_index(ll be , ll en , ll val){
    ll mid = (be + en) / 2 ;
    if(be == en ) return  be ;
    if(be+1 ==  en){
        if(ara[en] >= val ) return en ;
        else return be ;
    }
    ll mn  = query( 1 , 1 , n , be , en)  ;
    if(mn >= val) return en  ;
    else{
        ll mn2 = query( 1 ,1 , n , be , mid) ;
        if(mn2 >= val ) return fun_index(  mid , en , val) ;
        else{
            return fun_index( be , mid-1 , val ) ;
        }
    }
}


ll fun_index2(ll be , ll en , ll val){
    ll mid  = (be  + en )/2 ;
    if(be == en) return be ;
    if(be+1 ==  en){
        if(ara[be] >= val ) return be ;
        else return en ;
    }
    ll mn  = query(1 , 1, n ,be , en) ;
    if( mn >= val) return be ;
    else{
        ll mn2 = query(1 , 1, n , mid  , en ) ;
        if(mn2 >= val ) return fun_index2( be , mid  , val ) ;
        else{
            return fun_index2(mid+1 , en , val);
        }
    }
}


int main(){
    ll tests , cases = 0 ;
    inll(tests) ;
    while(tests--){
        cases++;
        inll(n) ;
        for(ll i = 1 ; i<= n ; i++)
            inll(ara[i]) ;
        init(1 , 1 , n ) ;
        ll ans = 0 ;
        for(ll i = 1 ; i<= n ; i++){
            ll lef = fun_index2( 1 , i , ara[i]) ;
            ll rig = fun_index(i , n, ara[i]) ;
            ll area = (rig - lef + 1) *  ara[i] ;
            ans = max(ans , area) ;
        }
        printf("Case %lld: " , cases) ;
        oull(ans) ;
    }

}

