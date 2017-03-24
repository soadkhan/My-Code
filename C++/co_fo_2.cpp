#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
struct pai{
    long long int be;
    long long int en;
};

long long int ara[500] ;
pai sima[300] ;
long  long int bal   = 0;
void  is_pos(long long int i){
    long long int  go =  0;
    for(long long int j = sima[i].be ; j<= sima[i].en ; j++)
        go+= ara[j] ;
    if (go > 0) {
        bal = bal +  go;
    }
}

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    long long int n , m ;
    cin>> n >> m ;

    for (long long int i = 1  ; i<=n; i++)
        cin>>ara[i];

    for(long long int i = 0 ; i<m;i++)
        cin>>sima[i].be>>sima[i].en ;

    for(long long int i = 0 ; i<m;i++){
        is_pos(i) ;
    }

    cout<<bal <<endl ;

    return 0;
}


