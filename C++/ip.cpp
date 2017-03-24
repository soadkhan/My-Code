#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;

lld bal(lld a){
    lld ans = 0;
    lld powk = 1;
    while(a){
        ans += (a%10)*powk;
        a/=10;
        powk*=2;
    }
    return ans;
}


int main(){
    //freopen("inp.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    lld a,b,c,d;
    lld a2,b2,c2,d2;
    lld test;
    cin>>test;
    if(test<=0){
        cout<<endl;
        return 0;
    }
    lld cases = 0;
    while(test--){

        cases++;
        scanf("%lld%*c%lld%*c%lld%*c%lld",&a,&b,&c,&d);
        scanf("%lld%*c%lld%*c%lld%*c%lld",&a2,&b2,&c2,&d2);

        a2 = bal(a2);


        b2 = bal(b2);

        c2 = bal(c2);


        d2 = bal(d2);
        //cout<<a2<<" "<<b2<<" "<<c2<<" "<<d2<<endl;
        if(a==a2&&b==b2&&c==c2&&d==d2) cout<<"Case "<<cases<<": Yes"<<endl;
        else cout<<"Case "<<cases<<": No"<<endl;

    }

    return 0;
}
