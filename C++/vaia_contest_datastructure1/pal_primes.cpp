#include<bits/stdc++.h>
using namespace std ;
typedef unsigned long long int ll ;
#define mx 10100
bool K_bit(ll  n , ll k ){
    return (n & (1<<(k-1))) ? true : false ;
}
bool is_pal(ll n ){
    ll l = 1 ;
    ll r   = 0 ;
    ll n2 = n ;
    while(n2>0){
        n2/=2  ;
        r++ ;
    }
    while( l < r){
        if(K_bit( n , l)!=K_bit( n , r)) return false ;
        l++ ; r--;
    }
    return true ;
}
ll ara[mx] ;
vector<ll>primes ;
vector<ll>pal_primes ;
void build(ll n ){
    memset(ara ,  0  , sizeof(ara))  ;
    ara[2]  = 1  ;
    primes.push_back(2) ;
    for(ll i  = 2 ; i<= n ; i++ ){
        if(ara[i]==0) primes.push_back(i) ;
        if(ara[i]==0 || i == 2)
            for(ll j = i ; j<= n ;j+=i)
                ara[j] = 1;
    }
}

void re_build(){
    ll l  = primes.size(); ll fl ;
    for(ll i = 9999 ; i<= 99999999 ; i+=2){
        fl = 0;
        for(ll j = 0 ; j<l ; j++)
            if(i%primes[j]==0){
                fl = 1 ;
                break ;
            }
        if(fl==0 ) primes.push_back(i) ;
    }
}

void again(){
    ll l = primes.size() ;
    for(ll i = 0 ; i< l ; i++ )
        if(is_pal(primes[i]))
            pal_primes.push_back(primes[i]) ;
}


ll str_to_num(char str[]){
    ll  l  = strlen(str) ;
    ll ans = 0 ;
    ll pw = 1 ;
    for(ll i = l-1 ; i>=0 ; i--) {
        ans +=  (str[i] - 48 )*pw;
        pw*=2;
    }
    return ans ;
}

int main(){
    build(10000) ;
    re_build() ;
  //  again() ;

    char str[100] ;
    cin>>str ;
    cout<<str_to_num(str)<<endl;
     main() ;


    return 0 ;
}
