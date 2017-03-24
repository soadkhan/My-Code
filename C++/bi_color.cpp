#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;

map<ld,ld>visited;

bool bfs(ld start,map<ld,vector<ld> >graph){
    visited.clear();

    queue<ld>lists;

    lists.push(start);

    visited[start] = 1;

    while(lists.empty()!=true){

        ld hand = lists.front();

        lists.pop();

        ld l = graph[hand].size();

        for(ld i =0;i<l;i++){

            if(visited[graph[hand][i]] == 0){

                if(visited[hand] == 1) visited[graph[hand][i]] = 2;
                if(visited[hand] == 2) visited[graph[hand][i]] = 1;

                lists.push(graph[hand][i]);

            }

            if(visited[hand] == visited[graph[hand][i]]) return false;



        }

    }

    return true ;

}




int main(){
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    ld n,l;

    while(cin>>n){
        if(n==0) return 0;
        cin>>l;

        map<ld, vector<ld> > graph;

        while(l--){
            ld a,b;
            cin>>a>>b;

            graph[a].push_back(b);
            graph[b].push_back(a);

        }

        if(bfs(0,graph)) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;

    }


    return 0;
}

