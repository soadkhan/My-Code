#include<bits/stdc++.h>
using namespace std ;
typedef long long int  ll  ;
map<ll , vector<ll> >graph ;
map<ll , ll> color ;
map<ll , ll> visited ;
map<ll , ll> parents ;
map<ll , ll> ans ;
int main(){
    ll n , a , b;
    cin>>n ;
    for(ll i = 1 ; i < n ; i++){
        cin>>a>>b  ;
        graph[a].push_back(b) ;
        graph[b].push_back(a) ;
    }
    queue<ll>lists ;
    lists.push(1) ;
    visited[1] = 0 ;
    parents[1] = 1 ;
    color[1] = 1 ;
    ans[1] = 1;
    while(!lists.empty()){
        ll hand= lists.front() ; lists.pop()  ;
        ll l  = graph[hand].size() ;
        ll j  = 1 ;
        for(ll i  = 0 ; i< l ; i++){
            if(!visited.count(  graph[hand][i] )){
                lists.push(graph[hand][i]) ;
                visited[graph[hand][i]] =  visited[hand] + 1 ;
                parents[graph[hand][i]]  = hand ;
                while((j==color[hand] || j==color[  parents[  hand ] ])) j++  ;
                color[ graph[hand][i] ] = j ;
                ans[j] = 1 ;
                j++ ;
            }
        }
    }
    cout<<ans.size()<<endl ;
    for(ll i = 1 ; i <= n ; i++){
        if(i!=1)cout<<" "<<color[i] ;
        else cout<<color[i] ;
    }
    cout<<endl;
    return 0 ;
}

