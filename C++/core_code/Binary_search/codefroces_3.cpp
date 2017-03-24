#include<bits/stdc++.h>
using namespace std ; 

typedef long long int ll ; 
typedef double db  ; 



int main(){
	ll n   ,  ara[100010] ; 
	cin>>n ; 
	for(ll i = 0 ; i< n ; i++)
		cin>>ara[i] ; 
	sort(ara , ara+n ) ; 
	ll q ; 
	cin>>q ; 
	for(ll i = 0 ; i< q; i++){
		ll a ;  cin>>a ; 
		if(a < ara[0]) { 
			cout<<0<<endl; 
			continue ; 
		}
		if(a >  ara[n-1] ){
			cout<<n<<endl;
			continue ; 
		}
		ll lo =  0  , hi = n-1 ; 
		while(lo < hi ){
			ll mid =  lo +  ( hi - lo + 1)/2 ; 
			if( ara[mid] > a) 
				hi = mid -1; 
			else lo = mid ; 
		}
		cout<<lo+1 <<endl;
	}
	return 0 ;
}