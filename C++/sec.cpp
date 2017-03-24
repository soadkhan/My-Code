#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;

int main(){
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    ll h1 , m1 , s1 , h2 , m2 , s2 ;

    ll n ;
    cin>>n ;
    while(n--){
        scanf("%lld:%lld:%lld %lld:%lld:%lld" , &h1 , &m1 , &s1 , &h2 , &m2 , &s2 ) ;
        ll time1 = h1*60*60 + m1*60 +  s1 ;
        ll time2 = h2*60*60 + m2*60 +  s2 ;

        ll time1_che   = time1 + ( 3*60*60  )  ;



        if( time1 > time2   )  time1_che %= ( 24*60*60) ;

        //cout<<time1 <<" "<<time2<<endl;

        if(!(time1_che > time2)) {
            cout<<"No"<<endl;
            return 0 ;
        }


    }

    cout<<"Yes"<<endl;


    return 0 ;
}

