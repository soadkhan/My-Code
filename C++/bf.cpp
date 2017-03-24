#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;
typedef vector<string> vs ;
typedef map<string , vs> msvs ;
typedef map<string  , ll> msll;
typedef map<string , string > mss;
typedef string str ;

mss root ;
msll visited  ;


void bfs(str start   , str endi , msvs graph){
    root.clear() ;
    visited.clear() ;

    // clearing the global maps ;
    queue<str> lists ;
    lists.push(start) ;
    visited[start] = 0 ;

    // here starts

    while(lists.empty()!=true){
        str hand   = lists.front() ; lists.pop() ;
        ll l = graph[hand].size() ;

        if(hand == endi) break ; // if the handed instance is the end


        for(ll i = 0  ; i<l ; i++){
            if(!visited.count(graph[hand][i])){ // if the node is not marked
                visited[graph[hand][i]] = visited[hand] + 1 ; // level is increased by 1
                root[graph[hand][i]]  = hand ;                // the root of it is the hand
                lists.push(graph[hand][i]) ;                  // pushing in the queue(lists)
            }
        }

    }

}


void print_them(string start , string endi ){
    vector<string>lists ;
    lists.push_back(endi) ;
    string hand = root[endi] ;
    while(hand != start ){
        lists.push_back(hand) ;
        hand = root[hand] ;
    }

    lists.push_back(start) ;

    ll l = lists.size() ;
    for(ll i = l-1 ; i>=0 ; i--)
        cout<<lists[i][0] ;

}

int main(){
    freopen("uva.txt","rt",stdin);
    ll tests ;
    cin>>tests ;
    while(tests--){
        ll p , s ;
        cin>>p>>s ;
        msvs graph ;
        str a ,b ;
        while(p--){
            cin>>a>>b ;
            graph[a].push_back(b) ;
            graph[b].push_back(a) ;
        }
        str start , endi ;
        while(s--){
            cin>>start>>endi ;
            bfs(start , endi , graph) ;
            print_them(start  , endi ) ;
            cout<<endl;
        }
    }



    return 0 ;
}
