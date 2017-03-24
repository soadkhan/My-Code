#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

#define MX 290200

struct node{
    ll f_max ;
    ll s_max ;
};


ll ara[MX] ;
node tree[3*MX] ;
ll n ;

void init(ll nd , ll be , ll en ){
    if(be==en){
        tree[nd].f_max = ara[be] ;
        tree[nd].s_max = -1 ;
        return ;
    }

    ll left  =  nd*2 ;
    ll right =  left + 1 ;

    ll mid  = (be+en)/2 ;

    init(left , be , mid ) ;
    init(right , mid+1 , en) ;

    if(tree[left].f_max  == tree[right].f_max) {
        tree[nd].f_max = tree[right].f_max ;
        tree[nd].s_max = tree[right].f_max ;
       // tree[nd].s_max = max(tree[left].s_max , tree[right].s_max ) ;
        return ;
    }
    else{
        tree[nd].f_max = max(tree[left].f_max , tree[right].f_max) ;
        ll max_min = min( tree[left].f_max , tree[right].f_max ) ;
        tree[nd].s_max = max(  max (tree[left].s_max , tree[right].s_max ) , max_min) ;
        return ;
    }

}


node   query(ll nd  , ll be , ll en , ll i  , ll j){
    if(i<=be && j>=en){
        node ret = tree[nd] ;
        return ret ;
    } // vitore

    if(i>en || j<be) {
        node ret ;
        ret.f_max =  -1 ;
        ret.s_max =  -1 ;
        return ret ;
    } // baire


    ll left  =  nd*2 ;
    ll right =  left + 1 ;

    ll mid  = (be+en)/2 ;

    node  ret_left = query( left , be  , mid , i , j ) ;
    node  ret_right = query( right , mid+1 , en , i , j) ;

    node fin ;

    if(ret_left.f_max == ret_right.f_max){
        fin.f_max = ret_right.f_max ;
        fin.s_max = ret_right.f_max ;
        //fin.s_max = max(ret_left.s_max , ret_right.s_max) ;
        return fin ;
    }
    else{
        fin.f_max =  max(ret_left.f_max , ret_right.f_max) ;
        ll max_min  = min(ret_left.f_max , ret_right.f_max) ;
        fin.s_max = max( max(ret_left.s_max , ret_right.s_max  ) , max_min  ) ;
        return fin ;
    }

}

void  update(ll nd , ll be , ll en ,ll i , ll new_val ){
    if(  i > en || i< be) {
        return  ;
    } // baire

    if( be>=i && en<= i ){
        tree[nd].f_max = new_val ;
        tree[nd].s_max = -1 ;
        return  ;
    } // asol jaygay ;)

    ll left  =  nd*2 ;
    ll right =  left + 1 ;

    ll mid  = (be+en)/2 ;

    update(left , be , mid , i , new_val) ;
    update(right , mid+1 , en , i , new_val) ;

    if(tree[left].f_max  == tree[right].f_max) {
        tree[nd].f_max = tree[right].f_max ;
        tree[nd].s_max = tree[right].f_max ;
       // tree[nd].s_max = max(tree[left].s_max , tree[right].s_max ) ;
        return ;
    }
    else{
        tree[nd].f_max = max(tree[left].f_max , tree[right].f_max) ;
        ll max_min = min( tree[left].f_max , tree[right].f_max ) ;
        tree[nd].s_max = max(  max (tree[left].s_max , tree[right].s_max ) , max_min) ;
        return ;
    }

}

int main(){
   // freopen("uva.txt","rt",stdin);
   // freopen("uva_out.txt","wt",stdout);
    scanf("%lld" , &n) ;

    for(ll i  = 1  ; i<= n ; i++)
        scanf("%lld" , &ara[i]) ;

    init(1 , 1 , n) ;

    ll q ;
    scanf("%lld" , &q) ;
    getchar() ;

    while(q--){
        char com ;
        ll a , b ;
        scanf("%c%lld%lld" , &com , &a , &b) ;
        getchar() ;
        if(com=='U'){
            update(1  , 1 , n , a  , b) ;
        }
        else if(com == 'Q'){
            node ans = query(1 , 1, n , a , b) ;
            printf("%lld\n" , ans.f_max+ans.s_max ) ;
        }
    }
    return 0 ;
}









