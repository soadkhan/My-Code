#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;
#define mx 100100
#define inll(a)   scanf("%lld" ,&a )
#define oull(a)   printf("%lld\n" ,a )

struct node{
    ll ct ;
    ll adj[20] ;
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
    }
}

ll query(char str[]){
    ll l  = strlen(str) ;
    ll cur = 1 ;
    for(ll i = 0 ; i< l ; i++){
        ll x = str[i] - 48 ;
        if(tri[cur].adj[x]== -1) return 0 ;
        cur = tri[cur].adj[x] ;
    }
    return tri[cur].ct ;
}



int main(){
    ll tests ;
    inll(tests) ;
    getchar() ;
    while(tests--){
        char lists[10010][15] ;
        ll n  ;
        inll(n) ;
        getchar() ;
        for(ll i  = 0 ; i< n ; i++){
            cin>>lists[i] ;
            inser(lists[i]) ;
        }
        ll fl  = 0 ;
        for(ll i  = 0 ; i< n ; i++){
            if(query(lists[i]) > 1 ) {
                fl = 1;
                break ;
            }
        }
        if(fl==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        for(ll i  = 0 ; i<= sx ; i++)
            tri[i].re() ;
        sx = 1 ;

    }
    return 0 ;
}
