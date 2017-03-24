#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

struct sth{
    ll x1 ;
    ll y1 ;
    ll x2 ;
    ll y2 ;
};


bool ache(ll r , ll c  , sth a){
    if((r>=a.x1 && r<=a.x2) && (c>=a.y1 && c<=a.y2)) return true ;
    else return false ;
}


int main(){
    ll r , c ;

    sth ara[1000] ;
    ll n ;
    cin>> n;
    for(ll i = 0 ; i<n;i++)
        cin>>ara[i].x1>>ara[i].y1>>ara[i].x2>>ara[i].y2 ;
    ll ans  =  0;


    for(ll i = 0 ; i<120  ; i++){
        for(ll j = 0 ; j<120 ; j++){
            for(ll k = 0 ; k<n ;k++){
                if(ache(i , j , ara[k])) ans++ ;
            }
        }
    }


    cout<<ans<<endl;


    return 0 ;
}

