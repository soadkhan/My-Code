#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....

typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;

lld n , co ;
lld ara[10000] ;


int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    cin>>n>>co;

    cin>>ara[0] ;
    lld ma = ara[0] ;
    lld mi = ara[0] ;

    for(lld i = 1 ; i<n;i++){
        cin>>ara[i] ;
        ma = max(ma , ara[i]) ;
        mi = min(mi , ara[i]) ;
    }
    if((ma - mi) > co ) cout <<"NO"<<endl ;
    else{
        cout<<"YES"<<endl;
        for(lld i = 0 ; i<n; i++){
            lld pr = 1 ;
            for(lld j = 0 ; j<ara[i]; j++){
                cout<<pr ;
                if(j!= ara[i]-1) cout<<" ";
                pr++ ;
                if(pr>co) pr = 1 ;
            }
            cout<<endl;
        }
    }



    return 0;
}


