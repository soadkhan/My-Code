#include<bits/stdc++.h>
using namespace std;

class myclass{
public:

    int x;
    int y;

    void set(int a,int b){
         this->x  = a;
         this->y  = b;
    }

    void show(){
        cout<<  this->x  <<" "<<   this->y   <<endl;
    }

};

int main(){
    myclass a;
    a.set(12,13);
    a.show();
    return 0;
}
