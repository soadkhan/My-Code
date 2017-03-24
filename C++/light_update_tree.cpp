#include<bits/stdc++.h>
using namespace std ;
/*
#define MX 101000
typedef long long int ll ;

/*

ll ara[MX] ;
ll tree[MX*3] ;
ll n ;

/*
void init(ll node  , ll i , ll j){
    if(i==j) {
        tree[node] =  ara[i] ;
        return  ;
    }

    ll left  = 2*node ;
    ll right  = left+1 ;

    init(left , i , (i+j)/2 ) ;
    init(right , ((i+j)/2) +  1 , j ) ;

    tree[node] =  tree[left] +  tree[right] ;

    return ;
}

/*

ll queri(ll node , ll be , ll en , ll i , ll j){
    if( be >= i && en <= j ) return tree[node] ;
    if(en < i || be> j ) return 0 ;

    ll left = 2*node ;
    ll  right = left + 1 ;

    ll ret_left  = queri( left , be , (be + en)/2 , i , j) ;
    ll ret_right = queri( right , ((be + en)/2) +  1 , en , i , j ) ;

    return ret_left  + ret_right ;
}
/*
void  update(ll node , ll be , ll en , ll i , ll new_val){
    if( be>=i && en<= i  ){
        tree[node] =  new_val ;
        return  ;
    }

    if(  i > en || i< be) {
        return  ;
    }

    ll left  =  node*2 ;
    ll right  = left+1;

    update( left , be , (be +  en)/2 , i , new_val) ;
    update ( right , ( (be +  en)/2) + 1  , en , i , new_val ) ;

    tree[node] =  tree[left] +  tree[right] ;
    return ;
}

*/


int main(){
    cout<<"bal"<<endl;
  //  cin>> n ;
  //  for(ll i = 0 ; i< n ; i++)
    //    cin>>ara[i] ;

 //   init(0, 0, n-1) ;

   // update(0 , 0 , n-1 , 0, 0) ;

   // cout<<queri( 0 , 0 , n-1 , 0 , n-1) ;

    return  0 ;
}
