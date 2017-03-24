#include<bits/stdc++.h>
using namespace std ;

#define  MX 100200
typedef long long int ll ;

ll ara[MX] ;
ll tree[MX*3] ;
ll n;

void init(ll node , ll i , ll j ){
    if(i == j){
        tree[node] = ara[i] ;
        return ;
    }

    ll leftnode  = 2*node ;
    ll rigthnode = leftnode + 1;

    init(leftnode , i , (i+j)/2) ;
    init(rigthnode ,((i+j)/2)+1 , j ) ;

    tree[node] = min(tree[leftnode] , tree[rigthnode]) ;
}

ll queri(ll node , ll be , ll en , ll i , ll j){
    if(i<=be && j>=en) return tree[node] ; // vitore
    if(i>en || j<be) return 900000000000; // baire


    ll leftnode  = 2*node ;
    ll rigthnode = leftnode + 1;

    ll ret_le , ret_ri;

    ret_le = queri(leftnode , be , (be+en)/2 , i , j) ;
    ret_ri = queri(rigthnode ,((be+en)/2 )+1 , en , i , j ) ;

    return min(ret_le , ret_ri) ;
}


int main(){
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    ll tests ;
    scanf("%lld", &tests) ;
    ll cases = 0;
    while(tests--){
        cases++;
        printf("Case %lld:\n", cases) ;
        ll q ;
        scanf("%lld" , &n) ;
        scanf("%lld" , &q) ;

        for(ll i= 1 ; i<=n ; i++)
            scanf("%lld" , &ara[i]) ;

        init(1 , 1 , n) ;

        while(q--){
            ll a , b ;
            scanf("%lld%lld" , &a , &b) ;
            printf("%lld\n", queri(1, 1, n, a , b)) ;
        }
    }
    return 0 ;
}
