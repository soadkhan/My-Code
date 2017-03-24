#include<bits/stdc++.h>
using namespace std; 

typedef long long int ll ; 

#define inll(a) scanf("%lld" , &a) 

int main(){
	ll ara[100] ; 
	ll n , i ; 
	inll(n) ;
	cout<<n<<endl; 
	for(i  =0 ; i< n ; i++) {
		inll(ara[i]) ; 
	}
	ll area , max_area = 0 ;
	stack<ll>st ;  
	for( i = 0  ; i< n ; i++){
		if(st.empty()  || ara[i] >= ara[ st.top() ]){
			st.push(i) ; 
		}
		else{
			while(!st.empty() ||  ara[st.top() ] < ara[i]  ){
				ll tp = st.top() ; st.pop() ;
				if(st.empty()) area = ara[tp] * i ; 
				else area = ara[tp] * ( i - tp  - 1  ) ;
				max_area = max(area , max_area) ; 
			}
			st.push(i) ;
		}
	}

	while(!st.empty()){
		cout<<"sa"<<endl;
		ll tp = st.top() ; st.pop() ;
		if(st.empty()) area = ara[tp] * i ; 
		else area = ara[tp] * ( i  - tp  - 1)  ; 
		max_area = max(area  , max_area) ;
	}
	cout<<max_area<<endl;
	return  0 ;
}