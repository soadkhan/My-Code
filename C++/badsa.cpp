#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

int main(){
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    ll ara[101000] ;

    ll n ;
    cin>>n;
    for(ll  i = 0 ; i<n ; i++){
        ll h , m ,s ;
        scanf("%lld:%lld:%lld" , &h , &m , &s) ;
        ara[i] = (  h*60*60 + m*60 + s ) ;
    }

    sort( ara , ara+n) ;

    ll ans = 0 ;

    for(ll i = 0 ; i<n ; i++){
        ll coun = 1 ;
        for(ll  j = i+1 ; j <n ; j++){
            if(ara[j] < ara[i] + 15*60 ) coun++ ;
            else break ;
        }

        ans = max(ans , coun) ;

    }

    cout<<ans<<endl;

    return 0 ;
}


