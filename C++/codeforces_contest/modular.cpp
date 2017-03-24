#include<bits/stdc++.h>
using namespace std ;
#define mod 1000000007
typedef long long int ll ;

int main(){
    ll a, b, c, n  ;
    cin>>a>>b>>n ;
    c = b - a ;
    ll ara[10] = { -c , a , b , c , -a , -b} ;
    n%=6 ;
    cout<<( (ara[n]%mod) + mod )%mod<<endl ;
    return  0 ;
}
