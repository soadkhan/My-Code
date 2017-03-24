#include <iostream>
#include <cstring>
#include<new>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<cstdio>
#include<cstdlib>
#include<bitset>
using namespace std;

int main()
{
    //freopen("uva.txt","rt",stdin);


    int t,i,l;
    char code[2000];
    cin>>t;

    for(i=1;i<=t;i++){
        cin>>code;
      //  cout<<code<<endl;
        l=strlen(code);
        if(strcmp(code,"1")==0 || strcmp(code,"4")==0 || strcmp(code,"78")==0){
            cout<<"+"<<endl;
            continue ;
        }
        else if(code[l-2]=='3' && code[l-1]=='5'){
            cout<<"-"<<endl;
            continue ;
        }
        else if(code[0]=='9' && code[l-1]=='4'){
            cout<<"*"<<endl;
            continue ;
        }
        else{
            cout<<"?"<<endl;
            continue ;
        }
    }

    return 0;
}

