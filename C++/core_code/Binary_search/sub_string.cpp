#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
ll n , k ;
string str ;

bool fun(ll  num){
    map<char , ll>temp ;
    ll i  ;
    for(i = 0 ; i< num  ; i++)
        temp[str[i]]++ ;
    if(temp['b'] <= k || temp['a'] <= k) return true  ;
    for(ll j = num , i = 0 ; j< n ; j++){
        temp[str[j]]++ ;
        temp[str[i++]]-- ;
        if(temp['a'] <= k || temp['b'] <= k ) return true ;
    }
    return false ;
}

int main(){
    cin>>n>>k>>str ;
    ll lb = 1 , ub = n ;
    while(lb < ub){
        ll mid = lb + (ub - lb +1)/2 ;
        if(!fun(mid))
            ub = mid -1 ;
        else
            lb = mid ;
    }
    cout<<lb<<endl;
    return  0 ;
}
