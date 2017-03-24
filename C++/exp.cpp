#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int x;
    int y;
    bool operator == (node a){
        if(x==a.x&&y==a.y) return true;
        else return false;
    }
};


int main(){
    node one, onther;
    cin>>one.x>>one.y;
    cin>>onther.x>>onther.y;
    if(one == onther) cout<<"get";
    else cout<<"no";


}
