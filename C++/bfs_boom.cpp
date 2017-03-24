#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;


map<ld,ld>visited;







void bfs(ld start,map<ld,vector<ld> >graph){
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
            }

        }

    }

}

int main(void){
    map<ld,vector<ld> >graph;
    ld test;
    cin>>test;
    while(test--){
        ld num,con;
        cin>>num;
        vector<ld> com;
        while(num--){
            cin>>con;
            com.push_back(con);
        }
        l = com.size();
        for(ld i = 0;i<l;i++){
            for(ld j = 0;j<l;j++){
                if(i!=j){
                    graph[com[i]].push_back(com[j]);
                }
            }
        }
    }
    ld cases;
    cin>>cases;
    while(cases--){
        visited.clear();
        ld start;
        cin>>start;
        bfs(start,graph);







    }



    return 0;
}

#S.......#
#..#.##.##
#.##.##.##
.#....##.#
##.##..#.#
#..#.##...
#......##.
..##.##...
#.###...#.
#.....###T


