#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

int main(){
    ll  n =  6 ;
    ll i = 0;
    ll ara[100] ;
    while(n--){
        cin>>ara[i];
        i++ ;
    }

    ll soman = 1 ;

    ll a =  ara[0] ;

    for(ll  i= 1 ; i<6 ; i++){
        if(ara[i] !=  a) soman  = 0 ;
    }

    if(soman == 1){
        ll ans =  6 * ((a*(a+1)/ 2) + ( a*(a-1)/2  )) ;
        cout<<ans<<endl;
    }
    else{
         ll ans = 0 ;
         for(ll i = 0 ; i< 6 ; i++){
            ll a =  ((ara[i])*(ara[i]+1) / 2) + ( (ara[i])*(ara[i]-1)/2  ) ;
     //       cout<<a<<endl;
            ans+=a ;
         }
         ll b = abs(ara[0] -  ara[1]) ;
         ans-=2*( ((b)*(b+1)/2) + ((b)*(b-1)/2) );
         cout<<ans <<endl;
    }





    return 0 ;
}

