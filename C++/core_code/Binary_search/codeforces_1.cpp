#include<bits/stdc++.h>
using namespace std ; 

typedef long long int ll ; 
typedef double db  ; 


db max_v(db a , db  b){
	return  (a>b) ? a : b ; 
}


int main(){
	db len   , ara[1010] ; 
	ll n  ; 
	cin>>n>>len ; 
	for(ll i = 0 ; i< n ; i++)
		cin>>ara[i] ; 
	sort(ara , ara+n) ; 
	db ans = 0 ; 
	ans  = ara[0] ; 
	ans = max_v(ans , len  -  ara[n-1]) ; 
	for(ll i = 1 ; i < n ; i++)
		ans = max_v(ans , (ara[i] - ara[i-1])/2) ; 
	printf("%.15lf\n" , ans) ; 
	return 0 ;
}