#include<bits/stdc++.h>
using namespace std;

typedef long long int  ll ;

map<ll , vector<ll> >graph   ;
map<ll , ll>visited ;

void dfs(ll node , ll &ver  , ll &ege){
    visited[node] = 1;
    ll l = graph[node].size() ;
    ver++ ;
    ege+= l;
    for(ll  i  = 0 ; i< l ; i++)
        if(visited[graph[node][i]]!=1)
            dfs(graph[node][i] , ver , ege) ;
}

int main(){
    ll n , m  ;
    cin>>n>>m;
    for(ll i = 0 ; i< m ; i++){
        ll a, b ;
        cin>>a>>b ;
        graph[a].push_back(b) ;
        graph[b].push_back(a) ;
    }
    for(ll i  = 1  ; i<= n ;i++)
        if(visited[i]!=1){
            ll no  = 0 , eg = 0 ;
            dfs(i , no , eg) ;
            if(eg != (no * (no-1))){
                cout<<"NO"<<endl;
                return  0 ;
            }
        }
    cout<<"YES"<<endl;
    return 0 ;
}
