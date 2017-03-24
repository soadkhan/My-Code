#include<bits/stdc++.h>
using namespace std ;

typedef long long int  ll ; 
#define sz 200100

int main(){
	ll n , q  , a ; 
	ll ara[sz] ; 
	cin>>n>>q ; 
	for(ll i  =0 ; i< n ; i++)
		cin>>ara[i] ; 
	sort(ara , ara+n) ; 
	for(ll i = 0 ; i < q ; i++){
		cin>>a ;
		if(a < ara[0]) {
			cout<<0<<" " ;
			continue  ;
		} 
		ll lb = 0 , ub = n-1 ;
		while(lb < ub){
			ll mid = lb + (ub  - lb + 1)/2 ; 
			if(ara[mid] >  a)
				ub  = mid - 1 ;
			else 
				lb = mid ; 
		}
		cout<<lb+1<<" " ;
	}
	return  0 ;
} 