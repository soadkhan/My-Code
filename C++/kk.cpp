#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;

lld bal(lld a){
    lld ans = 0;
    lld powk = 1;
    while(a){
        ans = (a%10)*powk;
        a/=10;
        powk*=2;
    }
    return ans;
}



main(){
    cout<<bal(100)<<endl;




}
