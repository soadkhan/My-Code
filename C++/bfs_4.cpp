#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;

class node{
public:
    ld x;
    ld y;
    node(int a=0, int b=0){
        x = a;
        y = b;
    }
    bool operator == (node a){
        if(x==a.x&&y==a.y) return true;
        else return false;
    }
};

ld mat[1010][1010];

ld dx[] = {1,0,-1,0};
ld dy[] = {0,1,0,-1};

ld bfs(node start,node des,ld r , ld c){
    queue<node>list_node;
    list_node.push(start);
    while(list_node.empty()!=true){
        node hand = list_node.front();
        list_node.pop();
        for(ld i = 0; i < 4 ; i++){
            if(hand.x+dx[i]>=0&&hand.x+dx[i]<r&&hand.y+dy[i]>=0&&hand.y+dy[i]<c)
                if(mat[hand.x+dx[i]][hand.y+dy[i]]==0)
                    {
                        node next(hand.x+dx[i],hand.y+dy[i]);
                        if(!(next==start))list_node.push(next);
                        if(!(next==start))mat[hand.x+dx[i]][hand.y+dy[i]] = mat[hand.x][hand.y] + 1;
                        if(des == next ) return mat[des.x][des.y];
                    }
        }
    }
}

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    ld r,c;
    while(cin>>r>>c){
        if(r==0&&c==0) break;

        for(ld i = 0;i<r;i++)
            for(ld j=0;j<c;j++)
                mat[i][j] = 0;

        ld cases;
        cin>>cases;
        while(cases--){
            ld row,col,num;
            cin>>row>>num;
            while(num--){
                cin>>col;
                mat[row][col] = -1;
            }
        }

        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        node start(x1,y1);
        node des(x2,y2);
        cout<<bfs(start,des,r,c)<<endl;

    }
    return 0;
}
