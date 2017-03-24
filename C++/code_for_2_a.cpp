#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....

typedef long long int ll ;



int main(void) {

    ll n ;
    cin>> n ;
    ll a = 2 , b = 3 , c ;
    ll ans = 0 ;
    while(a<=n){
        ans++ ;
        c= a+b ;
        a= b ;
        b= c;
    }
    cout<<ans<<endl ;



    return 0;
}


