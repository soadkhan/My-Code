#include<bits/stdc++.h>
using namespace std ;

typedef long long int  ll ;
#define MX 100100

struct node{
    ll mx ;
    ll mn ;
};

ll n ;
ll ara[MX] ;
node tree[3*MX] ;

void init(ll nd , ll be , ll en ){
    if(be ==  en){
        tree[nd].mx = ara[be] ;
        tree[nd].mn = ara[be] ;
        return ;
    }

    ll left  = nd*2 ;
    ll right  = left+1 ;

    ll mid  = (be+en)/2 ;

    init( left , be , mid) ;
    init(right , mid+1 , en) ;

    tree[nd].mx = max(tree[left].mx , tree[right].mx) ;
    tree[nd].mn = min(tree[left].mn , tree[right].mn) ;

    return  ;
}

node query(ll nd , ll be , ll en , ll i , ll j){
    if(i<=be && j>=en){
        node ret ;
        ret.mx = tree[nd].mx ;
        ret.mn  = tree[nd].mn ;
        return ret ;
    } // vitore

    if(i>en || j<be) {
        node ret ;
        ret.mx = INT_MIN ;
        ret.mn = INT_MAX ;
        return ret ;
    } // baire

    ll left  = nd*2 ;
    ll right = left + 1 ;

    ll mid  = (be+en)/2 ;

    node ret_left = query(left , be , mid , i , j) ;
    node ret_right = query(right , mid+1 , en , i , j) ;

    node fin ;
    fin.mx = max(ret_left.mx  , ret_right.mx) ;
    fin.mn = min(ret_left.mn  , ret_right.mn) ;

    return fin ;

}

int main(){
    ll tests , cases = 0 ;
    scanf("%lld" , &tests) ;
    while(tests--){
        cases++ ;
        ll k ;
        scanf("%lld%lld" , &n , &k ) ;
        for(ll i = 1 ; i<= n ; i++)
            scanf("%lld" , &ara[i]) ;

        init(1 , 1, n ) ;
        ll ans = 0 ;

        for(ll i =1 ; i<= n - k + 1 ; i++){
            node fin  = query( 1, 1, n , i  , i+k-1) ;
            ans = max(ans , fin.mx - fin.mn) ;
        }

        printf("Case %lld: %lld\n" , cases , ans ) ;

    }

    return 0 ;
}

