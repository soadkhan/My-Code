#include<bits/stdc++.h>
using namespace std ; 

typedef long long int ll ; 
vector<ll>primes ; 

void build(){
    ll siv[100100] ;
	memset(siv , 0 , sizeof(siv)) ;
	siv[2] = 0 ;
	for(ll i = 2 ; i<= 100100 ; i++){
		if(siv[i]==0){
			primes.push_back(i) ;
			for(ll j = 2*i ; j<= 100100 ; j+=i)
				siv[j] = 1; 
		}
	}
}

ll eq_gr_prime(ll a ){
	ll lb = 0 ; 
	ll ub = primes.size() - 1 ;
	while(lb<ub){
		ll mid = lb + (ub  - lb) /2 ; 
		if(primes[mid] >= a)
			ub  = mid ; 
		else 
			lb = mid + 1 ;
	}
	return primes[lb] ; 
}

int main(){
	build() ;
	ll r, c , a ;
	ll row[510] = {0} ;
	ll col[510] = {0} ; 
	ll ans = LONG_LONG_MAX ;
	//cin>>r>>c ;
	scanf("%I64d%I64d" , &r , &c) ;
	for(ll i = 0 ; i< r; i++){
		for(ll j  = 0 ; j< c ; j++){
			//cin>>a ; 
			scanf("%I64d" , &a) ; 
			ll b  = eq_gr_prime(a)  ;
			row[i] +=  b - a ;  
			col[j] +=  b - a ; 
		}
	}
	for(ll i  = 0 ; i< r ; i++){
	    ans = min(ans , row[i]) ; 
	}
		
	for(ll i  = 0 ; i< c ; i++){
	    ans = min(ans , col[i]) ;
	}
		
	printf("%I64d\n" , ans ) ;
	return  0 ;
}