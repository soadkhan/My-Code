#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;


int main(){
    ll n ,m, su ,se , ans = 10000000000 ;
    cin>>n>>m ;

    while(m--){
        cin>>su>>se ;
        ans = min(ans , abs(su  -  se) ) ;
    }

    cout<<ans+1<<endl ;
    ll pr = 0;
    for(ll  i  = 0 ;i <  n ; i++){
        if(i%(ans+1) == 0) pr = 0 ;
        cout<<pr;
        pr++ ;
        if(i!=n-1) cout<<" ";
    }
    cout<<endl;



    return 0 ;
}
