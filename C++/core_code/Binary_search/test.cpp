#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

ll ser_sum(ll n, ll a, ll d){
    if(n==0) return  0 ;
    ll ans = 2*a*n + d*n - d ;
    ans =  ans/2 ;
    return ans ;
}




int main(){
    cout<<ser_sum(3 , 3 , 3) ;


    return  0 ;
}
