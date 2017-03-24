#include<iostream>
using namespace std;

void incr(int *a){

        *a++;

}

void decr(int &a){

        a++;

}


int main(){
        int k;
        k=5;
        incr(&k);
        cout<<k<<endl;
        decr(k);
        cout<<k<<endl;
        return 0;
}
