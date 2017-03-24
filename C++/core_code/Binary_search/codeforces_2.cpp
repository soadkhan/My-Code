#include<bits/stdc++.h>
using namespace std ; 

typedef long long int ll ; 
typedef double db  ; 


bool predicate(ll n  , ll lim){
	ll get  = n*(n+1)/2 ; 
	get*=5 ; 
	return(  (get <= lim ) ? true : false   ) ; 
}


int main(){
	ll n , k ; 
	cin>>n>>k ; 
	ll lim  = 60*4 - k ; 
	if(lim < 5 ) {
		cout<<0<<endl;
		return  0 ;
	}


	ll be = 1  , en =  n ;  
	while(be < en){
		ll mid = be  + ( en  - be + 1)/ 2 ; 
		if(predicate( mid , lim ) == false )
			en  =  mid - 1 ;   
		else be  =  mid ; 
	}
	printf("%lld\n" , be) ; 
	return 0 ;
}