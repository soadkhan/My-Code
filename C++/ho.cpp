#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;

struct one{
    double ar;
    double  de;
};


int main(){
    //freopen("inp.txt","rt",stdin);
    lld tests;
    cin>>tests;
    while(tests--){
        one visitors[1000];
        lld n ;
        cin>>n;
        double max_ar = 0;
        double max_de = 0;
        double max_size;
        for(lld i = 0;i<n;i++){
                cin>>visitors[i].ar;
                if(visitors[i].ar>max_ar) max_ar = visitors[i].ar;
        }
        for(lld i = 0;i<n;i++){
                cin>>visitors[i].de;
                if(visitors[i].de>max_de) max_de = visitors[i].de;
        }

        max_size  = max_ar>max_de?max_ar:max_de;

        lld ans = 0;

        for(double  i = 1.0; i<=max_size;i= i + 0.5){
            lld k = 0;
            for(lld j = 0;j<n;j++){
                if(i>visitors[j].ar && i<visitors[j].de) k++;
            }
            if(k>ans) ans = k;
        }
        cout<<ans <<endl;
    }
    return 0;
}

