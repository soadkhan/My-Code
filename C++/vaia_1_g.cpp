#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....

typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;


struct pai{
    string ol ;
    string ne ;
};

vector<pai> ans ;

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    map<string , string >lists ;
    map<string , int > che ;
    int fl = 0 ;
    lld  n ;
    cin>> n ;
    lld u = 0;
    for(lld i = 0; i<n;i++){
        h:
        fl = 0 ;
        string a, b ;
        cin>>a>>b ;

        if(lists.empty()){
            lists[a] = b ;
        }
        else{
            map<string , string >::iterator it ;
            for(it  = lists.begin() ; it!= lists.end() ; it++){
                if(a==it->second){
                    lists[it->first] = b ;
                    fl = 1 ;
                    break ;
                }
            }
            if(fl==0 ) lists[a] = b ;
        }


    }

    cout<<lists.size()<<endl ;
    map<string , string > :: iterator it ;
    for(it = lists.begin() ; it!= lists.end() ; it++)
        cout<<it->first<<" "<<it->second<<endl ;

    return 0;
}


