#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;

struct edge{
    lld a;
    lld b;
    lld w;
};

bool compare(edge a, edge b){
    if(a.w<=b.w) return true;
    else return false;
}


lld dis_set[250];

void setter(lld i){
    for(lld a = 0; a<=i; a++) dis_set[a] = a;
}

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




int main(void){
//freopen("uva.txt","rt",stdin);
   // freopen("uva_out.txt","wt",stdout);
    map<string , lld>compress;
    lld start  = 0;
    lld nodes , edges;
    while(cin>>nodes>>edges){
   //         cout<<nodes<<edges<<endl;
        if(nodes==0 && edges ==0) break;
        vector<edge>lists;
        compress.clear();
        start = 0;
        setter(nodes+2);
        string a,b;
        lld wit;
        start++;
        while(edges--){
            cin>>a>>b>>wit;
            if(!compress.count(a)){
                compress[a] = start;
                start++;
            }
            if(!compress.count(b)){
                compress[b] = start;
                start++;
            }
            edge one;
            one.a = compress[a];
            one.b = compress[b];
            one.w = wit;
            lists.push_back(one);
        }
        sort(lists.begin(),lists.end(),compare);
        string  no,de;
        cin>>no>>de;
        vector<edge>check_list;
        for(lld  i = 0;;i++){
            union_fun(lists[i].a,lists[i].b);
            check_list.push_back(lists[i]);
            if(che_con(compress[no],compress[de])) break;
        }

        for(lld i = 0; ;i++){
          //  if()
        }


    }

    return 0;
}



