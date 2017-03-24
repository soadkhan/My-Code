#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;


int main(){
    ll frame_dr , frame_pr ;
    cin>>frame_dr>>frame_pr ;
    if(frame_dr<frame_pr) swap(frame_dr , frame_pr) ;
    ll pr_d, pr_p ;
    cin>>pr_d>>pr_p ;
    if(pr_d<pr_p) swap(pr_d , pr_p) ;

    if(!(pr_d<=frame_dr && pr_p <= frame_pr)) {
        cout<<"NO"<<endl;
        return 0 ;
    }

    ll fr_2_dr , fr_2_pr ;
    fr_2_dr = frame_dr ;
    fr_2_pr = frame_pr - pr_p ;

    if(fr_2_dr < fr_2_pr) swap(fr_2_dr , fr_2_pr) ;

    ll fr_3_dr , fr_3_pr ;
    fr_3_dr = frame_dr - pr_d ;
    fr_3_pr = frame_pr ;

    if(fr_3_dr < fr_3_pr) swap(fr_3_dr , fr_3_pr) ;


    ll a , b ;
    cin>>a>>b;
    if(a< b) swap(a, b ) ;

    if( (a<= fr_2_dr && b<=fr_2_pr  ) || (a<=fr_3_dr && b<=fr_3_pr)    ) cout<<"YES"<<endl ;
    else {
        fr_2_dr = frame_dr - pr_p ;
        fr_2_pr = frame_pr ;

        if(fr_2_dr < fr_2_pr) swap(fr_2_dr , fr_2_pr) ;

        fr_3_dr = frame_dr ;
        fr_3_pr = frame_pr - pr_d ;

        if(fr_3_dr < fr_3_pr) swap(fr_3_dr , fr_3_pr) ;

        if( (a<= fr_2_dr && b<=fr_2_pr  ) || (a<=fr_3_dr && b<=fr_3_pr)    ) cout<<"YES"<<endl ;
        else cout<<"NO"<<endl ;


    }


    return 0 ;
}

