#include<bits/stdc++.h>
using namespace std;

typedef long long int  ld;

map<ld,ld>visited;



//input
#define ini(x)        scanf("%d",&x)
#define ind(x)        scanf("%lf",&x)
#define inll(x)        scanf("%lld",&x)
#define incll(x)       scanf("%I64d",&x)
#define inch(x)        scanf("%c" , &x)
#define instr(x)       scanf("%s" , &x)


bool  bfs(ld start,map<ld,vector<ld> >graph){
    visited.clear();

    queue<ld>lists;
    lists.push(start);
    visited[start] = 0;

    while(lists.empty()!=true){

        ld hand = lists.front();
        lists.pop();

        ld l = graph[hand].size();

        for(ld i = 0;i<l;i++){

            if(graph[hand][i] == start) return true ;

            if(!(visited.count(graph[hand][i]))){
                lists.push(graph[hand][i]);
                visited[graph[hand][i]] = visited[hand] + 1;
            }

        }

    }

    return false;
}




int main(){
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    ld tests  , ct , rd ;
    scanf("%lld" , &tests) ;

    if(tests<=0){
        printf("\n") ;
        return  0 ;
    }

    for(ld cases  = 1 ; cases <= tests ; cases++ ){

        visited.clear() ;
        map<ld , vector<ld> > graph  ;

        scanf("%lld%lld" , &ct , &rd) ;

        map<ld , ld >cities;
        for(ld i = 0 ; i<rd ; i++){
            ld a, b ;
            scanf("%lld%lld" , &a , &b) ;
            graph[a].push_back(b) ;
            cities[a]++  ;
            cities[b]++  ;

        }

        map<ld , ld>::iterator it ;
        ld ans = 0 ;
        for(it= cities.begin() ; it!= cities.end() ; it++){
            if(!bfs(it->first , graph)) ans++ ;
        }
        if(rd == 0 )  ans = ct  ;
        else{
            ans = ans + (ct - cities.size() )  ;
        }
        printf("Case %lld: %lld\n" , cases , ans) ;

    }

    return 0;
}
