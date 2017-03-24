#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int  ld ;

struct one{
    lld tem;
    lld sol;
    lld pen;
};

struct pai{
    lld  sol;
    lld  pen;
};


bool compare(one a,one  b){
    if(a.sol>b.sol) return true;
    else if(a.sol<b.sol) return false;
    else{
        if(a.pen < b.pen) return true;
        else if(a.pen > b.pen) return false;
        else{
            if(a.tem < b.tem ) return true ;
            else return false ;
        }
    }
}


int main(){
    freopen("inp.txt","rt",stdin);
    freopen("ou.txt","wt",stdout);
    lld tests;
    lld cases = 0;
    cin>>tests;
    getchar();
    getchar();
    while(tests--){
        cases++;
        char ara[100];
        map<lld,pai>lists;
        int visited[20000] = {0};
        lld te,pr,ti;
        char de;

        while(gets(ara)){
            stringstream ss(ara);
            if(strcmp(ara,"")==0){
                 break;
            }
            ss>>te>>pr>>ti>>de;
            if(de == 'C'){
                if(visited[pr]==0){
                    visited[pr] = 1;
                    lists[te].pen += ti;
                    lists[te].sol ++;
                }
                else{
                    lists[te].pen += (ti+20);
                    lists[te].sol ++;
                }
            }
            else{
                lists[te].pen += 0 ;
                lists[te].sol += 0 ;
            }

        }

        vector<one>get_them;

        map<lld,pai>::iterator it;
        for(it =  lists.begin();it!=lists.end();it++){
            //cout<<it->first<<" "<<(it->second).sol<<" "<<(it->second).pen<<endl;
            one k;
            k.tem = it->first;
            k.sol = (it->second).sol;
            k.pen = (it->second).pen;
            get_them.push_back(k);
        }

        sort(get_them.begin(),get_them.end(),compare);
        if (cases!=1) cout<<endl;
        for(lld i =0;i<get_them.size();i++)
            cout<<get_them[i].tem<<" "<<get_them[i].sol<<" "<<get_them[i].pen<<endl;

        lists.clear();
        get_them.clear();

    }
    return 0 ;
}


