#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    ld ma;
    cin>>ma;
    while(ma--){
            vector<string> list_str[1000];
            map<string , ld> compress;
            ld test,cal,co_in = 1;
            cin>>test>>cal;
            while(test--){
                string fr,to;
                cin>>fr>>to;
                if(compress[fr]==0){
                    compress[fr] = co_in;
                    co_in++;
                }
                if(compress[to]==0){
                    compress[to] = co_in;
                    co_in++;
                }
                list_str[compress[fr]].push_back(to);
                list_str[compress[to]].push_back(fr);
            }


            while(cal--){
                map<string , ld> visited;
                map<string , string > prev;
                queue<string >bfs;
                string st,de;
                cin>>st>>de;
                bfs.push(st);
                while(bfs.empty()!=true){
                    string hand = bfs.front();
                    bfs.pop();
                    ld len = list_str[compress[hand]].size();
                    for(ld j= 0;j<len;j++){
                        if(visited[list_str[compress[hand]][j]]==0){
                            bfs.push(list_str[compress[hand]][j]);
                            prev[list_str[compress[hand]][j]] = hand;
                            visited[list_str[compress[hand]][j]] = 1;
                        }
                    }
                }


                vector<string> ans;
                ans.push_back(de);
                string go = de;
                string next ;
                while(next!=st){
                    next = prev[go];
                    ans.push_back(next);
                    go =  next;
                }


                for(ld j=ans.size()-1;j>=0;j--)
                    cout<<ans[j];
                cout<<endl;
            }
            if(ma!=0) cout<<endl;

    }

    return 0;
}


