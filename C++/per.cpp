#include<bits/stdc++.h>
using namespace std;

typedef long long int lld;
typedef long int ld;


int main(){
    //freopen("inp.txt","rt",stdin);
    lld tests,cases = 0;
    cin>>tests;
    if(tests<=0){
        cout<<endl;
        return 0;
    }
    while(tests--){
        cases++;
        lld a,b;
        cin>>a>>b;
        cout<<"Case "<<cases<<":"<<endl;
        vector<int>lists;
        for(int i = 65;i<=65+a-1;i++) lists.push_back(i);

        lld k = 0;

        do{

            for(int i = 0;i<lists.size();i++)
                printf("%c",lists[i]);
            cout<<endl;

            k++;
            if(k==b) break;

        }while(next_permutation(lists.begin(),lists.end()));

    }




    return 0;
}

