#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std ;
typedef long long int  ll ;
#define mx 20100
#define inll(a) scanf("%lld" , &a)
#define oull(a) printf("%lld\n" , a) ;
#define instr(a) scanf("%s" , &a)

struct node{
    ll ct  ;
    ll adj[28] ;
    node(){
        ct = 0 ;
        memset(adj , -1 , sizeof(adj)) ;
    }
};

node tri[mx] ;
ll sx = 1 ;

void inser(char str[]){
    ll l = strlen(str) ;
    ll cur = 1  ;
    for(ll i = 0  ; i < l ; i++){
        ll x = str[i] - 'a' + 1;
        if(tri[cur].adj[x]==-1)
            tri[cur].adj[x] = ++sx ;
        cur = tri[cur].adj[x] ;
        tri[cur].ct++ ;
    }
}


void pr(char str[]){
    ll l = strlen(str) ;
    ll cur = 1;
    for(ll i  = 0 ; i< l ; i++){
        cout<<str[i] ;
        ll x = str[i] - 'a' + 1 ;
        cur = tri[cur].adj[x] ;
        if(tri[cur].ct == 1 ) break;
    }
    cout<<endl;
}

char lists[1100][25] ;

int main(){
    ll l = 0 ;
    while(cin>>lists[l]){
        inser(lists[l]) ;
        l++ ;
    }

    for(ll i  = 0 ; i< l  ; i++){
        cout<<lists[i]<<" " ;
        pr(lists[i]) ;
    }

    return 0 ;
}

