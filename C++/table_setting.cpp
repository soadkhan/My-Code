#include<bits/stdc++.h>
using namespace std ;

typedef long long int  ll ;

struct pa{
    ll le ;
    ll en ;
};

map<ll , ll>HM ;
map<ll , ll>init ;
pa ara[101000] ;

bool compare(pa a , pa b){
    if(a.le > b.le ) return true ;
    else {
        if(a.le  == b.le ) {
            if(a.en > b.en) return true ;
            else return false ;
        }
        else return false ;

    }
}

ll maxs[100000] ;



int main(){
    ll n  ;
    ll mx_num = 0;
    ll sum = 0  ;
    ll ans  = 100000000000 ;
    cin>> n ;
    for(ll i = 0 ; i< n ; i++){
        cin>>ara[i].le;
        HM[ara[i].le]++ ;
        if(HM[ara[i].le] == 1)  {
            maxs[mx_num++] =  ara[i].le ;
        }

    }

    for(ll i = 0 ; i< n ; i++){
        cin>>ara[i].en ;
        sum+=ara[i].en ;
    }


    sort(ara , ara +  n , compare) ;

    ll l  =  HM.size();

    sort(maxs , maxs + l ) ;


    for(ll i = l-1 ; i>=0 ; i--){

        ll shuru   ;
        for(ll bal = 0 ; bal < n ; bal ++)
        if(ara[bal].le == maxs[i]){
            shuru  = bal ;
            break ;
        }
        ll shesh  =  shuru + HM[maxs[i]] - 1 + HM[maxs[i]] - 1;

        if(shesh >= n) shesh = n-1 ;

        ll s = 0 ;
        for(ll  j  = shuru ; j<= shesh ; j++){
           s+= ara[j].en ;
        }

        s = sum  - s ;
        ans  = min(ans , s) ;
    }

    cout<<ans <<endl;


    return 0 ;
}
