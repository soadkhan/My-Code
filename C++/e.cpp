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

    //freopen("inp.txt","rt",stdin);

    ld cities,com;
    while(cin>>cities>>com){
        if(cities==0 && com==0) break;
        map<ld,vector<ld> >graph;
        while(com--){
            ld a,b,c;
            cin>>a>>b>>c;
            graph[a].push_back(b);
            if(c==2) graph[b].push_back(a);
        }

        lld ans  = 1;

        for(ld i = 1;i<=cities;i++){
            for(ld  j = 1;j<=cities;j++){
                if(i!=j){
                    bfs(i,graph);
                    if(visited[j] == 0){
                        ans  = 0;
                        break;
                    }
                }
            }
            if(ans==0) break;
        }

        cout<<ans<<endl;
    }
    return 0;
}
