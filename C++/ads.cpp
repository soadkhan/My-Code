#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    long long int ara[101000] ;

    map<long long int , long long int >lists ;

    long long int n ,  k , ans = 0 ;
    cin>> n >> k ;
    for(long long int  i = 0 ; i< n ; i++){
            cin>>ara[i] ;
            lists[ara[i]]++ ;
    }

    if(k!=0){
        for(long long int  i = 0 ; i< n ; i++){
            if(lists.count(ara[i] ^ k ) ){
                ans  +=  lists[ ara[i] ^ k ]  ;
            }
        }
        cout<<ans/2<<endl;
    }

    else{
        map<long long int , long long int >::iterator it ;
        for(it = lists.begin() ; it!= lists.end() ; it++)
            ans+= ( ( it->second *  ( it->second  - 1 ) ) / 2 )  ;

        cout<<ans<<endl;

    }

    return 0;
}


