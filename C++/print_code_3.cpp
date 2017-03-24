#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;

map<ld,ld>visited;
map<ld,ld>parent;

void bfs(ld start,map<ld,vector<ld> >graph){
    visited.clear();
    parent.clear();
    if(!(graph.count(start))) return;
    queue<ld>lists;
    lists.push(start);
    visited[start] = 0;
    while(lists.empty()!=true){
        ld hand = lists.front();
        lists.pop();
        ld l = graph[hand].size();
        for(ld i =0;i<l;i++){
            if(!(visited.count(graph[hand][i]))){
                lists.push(graph[hand][i]);
                visited[graph[hand][i]] = visited[hand] + 1;
                parent[graph[hand][i]] =  hand ;
            }

        }

    }

}




int main(){
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    ld test,cases = 0;
    while(cin>>test){
        if(test == 0) break;
        map<ld,vector<ld> > graph;
        ld a,b;
        while(test--){
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        ld start,ttl;
        while(cin>>start>>ttl){
            if(start == 0 && ttl == 0) break;
            visited.clear();
            bfs(start,graph);
            ld ans  = 0 ;
            map<ld,ld>::iterator it;
            for(it =  visited.begin();it!=visited.end();it++){
                if(it->second > ttl) ans++;
            }
            ans  += graph.size() - visited.size();
            //cout<<ans<<endl;
            printf("Case %ld: %ld nodes not reachable from node %ld with TTL = %ld.\n",++cases,ans,start,ttl);
        }

    }
    return 0;
}

