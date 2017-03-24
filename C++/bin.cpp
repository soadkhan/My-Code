#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;

struct change{
    lld be;
    lld en;
};

bool vitore(change one,lld go){
    if(go>=one.be && go<= one.en) return true;
    else return false;
}

char ulta(char a){
    if(a=='0') return '1';
    else return '0';
}

int main(){
    freopen("inp.txt","rt",stdin);
    lld tests,rr = 0;
    //cin>>tests;
    scanf("%lld",&tests);
    while(tests--){
        rr++;
        cout<<"Case "<<rr<<":"<<endl;
        string bin;
        vector<change>lists;
        cin>>bin;
        getchar();

        //cout<<bin<<endl;
        lld qu;
        //cin>>qu;
        scanf("%lld",&qu);
        while(qu--){
            char i;
            //cin>>i;
            getchar();
            scanf("%c",&i);
            if(i=='I'){
                lld a,b;
                //cin>>a>>b;
                scanf("%lld%lld",&a,&b);
                change k;
                k.be  = a;
                k.en  = b;
                lists.push_back(k);
            }
            if(i=='Q'){
                lld j,coun = 0;
                cin>>j;
                lld l = lists.size();
                for(lld y = 0;y<l;y++)
                    if(vitore(lists[y],j))
                        coun++;
                //out<<"change occured "<<coun<<endl;
                if(coun%2==0){
                    //cout<<bin[j-1]<<endl;
                    printf("%c\n",bin[j-1]);
                }
                else {
                    //cout<<ulta(bin[j-1])<<endl;
                    printf("%c\n",ulta(bin[j-1]));
                }
            }

        }

    }

    return 0;
}
