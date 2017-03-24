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
    map<ld,vector<ld> > graph;
    ld nodes;
    while(cin>>nodes){
        while(nodes--){
            char str[100];
            scanf("%[^-,,,\n]",&str);
            ld start;
            ld che=0;
            start =  atol(str);
                while(4){
                    if (getchar() == '\n') break;
                    scanf("%[^-,,,\n]",&str);
                    ld go =  atol(str);
                    graph[start].push_back(go);
                }

        }





    }





    return 0;
}
