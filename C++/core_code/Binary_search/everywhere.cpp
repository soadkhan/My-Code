#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

string str ;
ll n ;
ll num ;

bool fun(ll k){
    map<char  , ll>temp ;
    ll i  = 0 ;
    for(i = 0 ; i< k ; i++)
        temp[str[i]]++ ;
    if(temp.size() == num) return true;
    for(ll j = k  , i = 0 ; j < n ; j++){
        temp[str[j]]++  ;
        temp[str[i]]-- ;
        if(temp[str[i]]==0) temp.erase(str[i]) ;
        i++ ;
        if(temp.size() == num) return true ;
    }
    return false ;
}

int main(){
    cin>>n>>str ;
    ll lb  = 1  , ub = n ;
    map<char , ll>lists ;
    for(ll i  = 0 ; i< n ; i++)
        lists[str[i]]++ ;
    num = lists.size() ;
    while(lb<ub){
        ll mid = lb + (ub - lb)/2 ;
        if(!fun(mid))
            lb = mid+1 ;
        else
            ub  = mid ;
    }
    cout<<lb<<endl;
    return  0 ;
}
