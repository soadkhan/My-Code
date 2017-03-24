#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    ld test;
    ld counter = 0;
    while(cin>>test){
        counter++;
        vector<string> list_str[1000];
        map<string , ld> compress;
        ld co_in = 1;
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
        map<string,int> chel;
        ans.push_back(de);
        string go = de;
        string next ;
        int fl = 0;
        while(next!=st){
            next = prev[go];
            ans.push_back(next);
            if(chel[next]==1){
                fl = 1;
                break;
            }
            chel[next] = 1;
            go =  next;
        }
        if(counter!=1) cout<<endl;
        if (fl == 1) {
            cout<<"No route"<<endl;
            goto m;
        }
        for(ld j=ans.size()-1;j>0;j--)
            cout<<ans[j]<<" "<<ans[j-1]<<endl;

        m:;
    }

    return 0;
}


