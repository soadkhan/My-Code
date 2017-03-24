#include<bits/stdc++.h>
using namespace std;
typedef long int ld;



int main(){

    ld coin[]={50,25,10,5,1} ;
    ld dp[8000] = {0};
    dp[0] = 1;
    ld am;

    for(ld i = 0;i< 5 ;i++)
        for(ld j=0;j<7500;j++)
            if(j >= coin[i]) dp[j] += dp[j-coin[i]];

    while(cin>>am) cout<<dp[am]<<endl;
    return 0;
}
