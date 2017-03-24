
#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....

typedef long long ll ;

int main(void) {
    ll time1 , time2 ;
    ll h1 , h2 , m1 , m2 ;

    scanf("%I64d:%I64d" , &h1 , &m1) ;
    if(h1==0) h1  = 24 ;

    time1 = m1*60 + h1*60*60 ;

    scanf("%I64d:%I64d" , &h2 , &m2) ;
    if(h2==0) h2  = 24 ;

    time2 = m2*60 + h2*60*60 ;

    ll ans = time1  - time2 ;


    if(time2 > time1) ans+= (24*60*60) ;



    ll ansh = ans/(60*60) ;
    ll ansm = (ans - ansh*60*60)/60 ;

    printf("%02I64d:%02I64d\n" , ansh , ansm ) ;








    return 0;
}


