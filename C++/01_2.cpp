#include<bits/stdc++.h>
using namespace std ;
typedef long int ld ;

ld n , cap ;
ld va[1000] ;
ld we[1000] ;
ld dp[1000][1000] ;


ld dp_fun(){
    for(ld i  = 0 ; i<= cap ; i++ )
        dp[0][i] = 0;
    for(ld i = 1 ; i<=   n ; i++ )
        for(ld w = 0 ; w<= cap ; w++){
            if(we[i]<=w)
                dp[i][w] = max ( dp[i-1][w] , va[i] +  dp[i-1][w  - we[ i] ] ) ;
            else dp[i][w] = dp[i-1][w] ;
        }
    return dp[n][cap] ;
}

int main(){

    cin>> n;
    for(ld i  = 1  ;i<= n ; i++)
        cin>>va[i]>>we[i] ;
    cin>>cap;
    cout<<dp_fun()<<endl;



    return 0 ;
}
