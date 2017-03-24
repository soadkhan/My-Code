#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....


typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;

lld  n , s, t  , ans = 0;
lld lists[101000];
lld check[101000] = {0} ;

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    cin>>n>>s>>t ;
    for(lld i = 1  ; i<=n;i++)
        cin>>lists[i] ;
     lld sh = s ;
     if(s==t) {
        cout<<0<<endl ;
        return 0;
     }
    while(4){
        sh = lists[sh] ;
        if(check[sh] == 1){
            cout<<-1<<endl ;
            break ;
        }
        check[sh] = 1 ;
        ans++ ;
        if(sh == t) {
            cout<<ans<<endl ;
            break ;
        }
    }




    return 0;
}



