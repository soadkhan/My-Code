#include<bits/stdc++.h>
using namespace std;
typedef long int ld;

ld ara[1000];
int  dp[1000][1000];
ld cap , n;

bool  dp_fun(ld  i , ld sum){
   if(i>=n){
        if(sum == n) return 1 ;
        else return 0 ;
   }
   if(dp[i][sum] != -1 ) return dp[i][sum] ;
   int  res1,res2 ;
   if(ara[i] + sum <= cap)  res1  = dp_fun(ara[i+1] , sum+ara[i]) ;
   else res1  = 1 ;
   res2 = dp_fun(ara[i+1] , sum );
   dp[i][sum] = res1|res2 ;
   return res1|res2 ;
}


int main(){




    return  0 ;
}
