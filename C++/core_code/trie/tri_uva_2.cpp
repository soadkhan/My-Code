#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;
#define mx 50000*210
#define inll(a)   scanf("%lld" ,&a )
#define oull(a)   printf("%lld\n" ,a )

struct node{
    ll ct ;
    ll adj[3] ;
    node(){
        ct = 0 ;
        memset( adj , -1 , sizeof(adj)) ;
    }
    void re(){
        ct = 0 ;
        memset( adj , -1 , sizeof(adj)) ;
    }
};

node tri[mx] ;
ll sx = 1 ;
ll ma_x = LONG_LONG_MIN ;

void inser( char str[]){
    ll l  = strlen(str) ;
    ll cur = 1 ;
    for(ll i  = 0 ; i< l ; i++){
        ll x  = str[i] - 48 ;
        if(tri[cur].adj[x]==-1){
            tri[cur].adj[x] = ++sx ;
        }
        cur = tri[cur].adj[x] ;
        tri[cur].ct++ ;
        ma_x = max(  (i+1) * tri[cur].ct  , ma_x  ) ;
    }
}

int main(){
    ll tests ;
    inll(tests) ;
    getchar() ;
    while(tests--){
        ll n ;
        inll(n) ;
        getchar() ;
        char str[210] ;
        for(ll i  = 0 ; i< n ; i++){
            cin>>str ;
            inser(str) ;
        }
        for(ll i  = 0 ; i<= sx ; i++)
            tri[i].re() ;
        sx = 1 ;
        cout<<ma_x<<endl;
        ma_x = LONG_LONG_MIN ;
    }
    return 0 ;
}

