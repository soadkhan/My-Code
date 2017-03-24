#include<bits/stdc++.h>
using namespace std ;

#define MX 101000
typedef long long int ll ;


ll ara[MX] ;
ll tree[MX*3] ;
ll n ;


void init(ll node  , ll i , ll j){
    if(i==j) {
        tree[node] =  ara[i] ;
        return  ;
    }

    ll left  = 2*node ;
    ll right  = left+1 ;

    init(left , i , (i+j)/2 ) ;
    init(right , ((i+j)/2) +  1 , j ) ;

    tree[node] =  tree[left] +  tree[right] ;

    return ;
}



ll queri(ll node , ll be , ll en , ll i , ll j){
    if( be >= i && en <= j ) return tree[node] ;
    if(en < i || be> j ) return 0 ;

    ll left = 2*node ;
    ll  right = left + 1 ;

    ll ret_left  = queri( left , be , (be + en)/2 , i , j) ;
    ll ret_right = queri( right , ((be + en)/2) +  1 , en , i , j ) ;

    return ret_left  + ret_right ;
}

void  update(ll node , ll be , ll en , ll i , ll new_val){
    if(  i > en || i< be) {
        return  ;
    } // baire

    if( be>=i && en<= i  ){
        printf("%lld\n", tree[node]) ;
        tree[node] =  new_val ;
        return  ;
    } // asol jaygay ;)

    ll left  =  node*2 ;
    ll right  = left+1;

    update( left , be , (be +  en)/2 , i , new_val) ;
    update ( right , ( (be +  en)/2) + 1  , en , i , new_val ) ;

    tree[node] =  tree[left] +  tree[right] ;
    return ;
}


void  update2(ll node , ll be , ll en , ll i , ll new_val){
    if(  i > en || i< be) {
        return  ;
    }

    if( be>=i && en<= i  ){
        tree[node] = tree[node] +  new_val ;
        return  ;
    }

    ll left  =  node*2 ;
    ll right  = left+1;

    update2( left , be , (be +  en)/2 , i , new_val) ;
    update2 ( right , ( (be +  en)/2) + 1  , en , i , new_val ) ;

    tree[node] =  tree[left] +  tree[right] ;
    return ;
}


int main(){
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    ll tests , cases = 0 ;
    scanf("%lld" , &tests) ;
    while(tests--){
        cases++ ;
        printf("Case %lld:\n" , cases) ;
        ll q ;
        scanf("%lld%lld", &n , &q) ;
        for(ll i = 1 ; i<=n ; i++)
            scanf("%lld" , &ara[i]) ;

        init(1 , 1, n) ;

        while(q--){
            ll a ;
            scanf("%lld" , &a) ;
            if(a==1){
                ll in ;
                scanf("%lld" , &in) ;
                update(1 , 1, n , in+1 , 0) ;
            }
            if(a==2){
                ll  in , val ;
                scanf("%lld%lld" , &in , &val) ;
                update2(1 , 1, n , in+1 , val) ;
            }
            if(a==3){
                ll su , se ;
                scanf("%lld%lld" , &su , &se) ;
                printf("%lld\n" , queri(1 , 1 , n , su+1 , se+1)) ;
            }

        }
    }

    return  0 ;
}

