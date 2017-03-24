#include<bits/stdc++.h>
using namespace std;


typedef long long int lld;
typedef long int ld;

lld dis_set[100];

lld find_head(lld a){
    if(dis_set[a] == a) return a;
    else{
        dis_set[a] = find_head(dis_set[a]);
        return find_head(dis_set[a]) ;
    }
}

bool che_con(lld a, lld b){
    return ((find_head(a)==find_head(b))?true:false);
}

void union_fun(lld a,lld b){
    lld u = find_head(a);
    lld v = find_head(b);
    if(u!=v) dis_set[u] = v;
}

int main(){
    for(lld i = 1 ;i<=10;i++) dis_set[i] = i;
    lld che =  5;
    while(che--){
        lld a,b;
        cin>>a>>b;
        union_fun(a,b);

    }
    while(4){
        lld a,b;
        cin>>a>>b;
        if(che_con(a,b)) cout<<"connected"<<endl;
        else {
            cout<<find_head(a)<<" "<<find_head(b)<<endl;
        }


    }




    return 0;
}
