#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;

map<ld,ld>visited;
map<ld,ld>level;

ld max_v = 0;

void bfs(ld start,map<ld,vector<ld> >graph){
    visited.clear();
    level.clear();
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
                level[visited[hand] + 1]++ ;
                if (level[visited[hand] + 1] >  max_v) max_v = level[visited[hand] + 1];
            }

        }

    }

}


int main(){
    //freopen("uva.txt","rt",stdin);
    // freopen("uva_out.txt","wt",stdout);
    ld cases;
    map<ld , vector<ld> >graph;
    cin>>cases;
    for(ld i = 0;i<cases;i++){
        ld n,a;
        cin>>n;
        while(n--){
            cin>>a;
            graph[i].push_back(a);
        }
    }

    ld test,start;
    cin>>test;
    while(test--){
        ld ans;
        cin>>start;
        bfs(start,graph);
        if (visited.size()==0) cout<<0<<endl;
        else{
            map<ld , ld>::iterator it;
            for(it = level.begin();it != level.end() ; it++){
                if(it->second == max_v) {
                    ans  = it->first;
                    break;
                }
            }
            cout<<max_v<<" "<<ans<<endl;
        }
         max_v = 0;
    }
    return 0;
}




