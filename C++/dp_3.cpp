#include<bits/stdc++.h>
using namespace std ;
typedef long int ld ;

ld dp[3000][3000] ;
ld coin[200] ;
ld cap , n;

ld dp_fun(ld i , ld am ){
    if(i>=n){
        if(am==0) return 1 ;
        else return 0;
    }
    if(dp[i][am]!=-1) return dp[i][am] ;
    int res1 = 0 , res2 = 0 ;
    if(coin[i] <= am) res1 = dp_fun(i+1 , am -  coin[i]) ;
    res2 = dp_fun(i+1 , am) ;
    return res1|res2 ;
}

int main(){
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    ld tests ;
    cin>>tests ;
    getchar() ;
    char str[1000] ;
    while(tests--){
        gets(str) ;
        stringstream ss(str) ;
        n = 0;
        ld a;
        ld sum = 0;
        memset(dp , -1 , sizeof(dp)) ;
        while(ss>>a){
            coin[n] = a;
            sum+=a;
            n++;
        }
        if(sum%2==1) cout<<"NO"<<endl;
        else{
            sum/=2 ;
            if(dp_fun( 0 , sum)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0 ;
}
