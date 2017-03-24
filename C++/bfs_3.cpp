#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;

class node{
public:
    int x;
    int y;
    int moves;
    node(int a,int b,int c=0){
        x = a;
        y = b;
        moves = c;
    }
};


int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};


int bfs(node start,node des){
    if(start.x == des.x && start.y == des.y) return 0;

    queue<node>list_node;
    start.moves = 0;

    list_node.push(start);

    while(list_node.empty()!=true){

        node  hand(0,0) ;
        hand.x = list_node.front().x;
        hand.y = list_node.front().y;
        hand.moves = list_node.front().moves;

        list_node.pop();

        for(int i=0;i<8;i++){

            if(hand.x+dx[i]<1||hand.x+dx[i]>8||hand.y+dy[i]<1||hand.y+dy[i]>8) continue;

            else {

                node next(hand.x+dx[i],hand.y+dy[i],hand.moves+1);

                list_node.push(next);


                if (next.x == des.x && next.y == des.y) {


                    return next.moves;

                }
            }
        }

    }

}


int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    string sr,en;
    while(cin>>sr>>en){
        node start(sr[0]-'a'+1,sr[1]-48);
        node des(en[0]-'a'+1,en[1]-48);
        //start.show();
        //des.show();
        cout<<"To get from "<<sr<<" to "<<en<<" takes "<<bfs(start,des)<<" knight moves."<<endl;
    }
    return 0;
}


