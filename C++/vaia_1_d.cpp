#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....


typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;


lld n ,ti ;
string str ;
lld l ;

void fun(){

    for(lld i = 0 ; i<ti ; i++){
            for(lld  k = 0 ; k<l-1;k++){
                if(str[k]=='B' && str[k+1] == 'G') {
                    str[k] = 'G' ;
                    str[k+1] = 'B' ;
                    k+=1 ;
                }
            }
           //cout<<str<<endl;
    }

}

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    cin>>n>>ti ;
    cin>>str;
    l = str.length() ;
    fun() ;
    cout<<str <<endl; ;
    return 0;
}


