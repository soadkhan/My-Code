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
using namespace std;
long long int pw(long long int a,long long int b) {
    long long int sum=1;
    for(long long int i=0; i<b; i++) {
        sum*=a;
    }
    return sum;
}
long long int dif(long long int a,long long int b) {
    if(a>b) return (a-b);
    else return (b-a);
}
int strlen(string s) {
    int len = 0;
    while (s[len]) len++;
    return len;
}
long long int max(long long int a,long long int  b) {
    if(a>b ) return a;
    else return b;
}
long long int min(long long int a,long long int  b) {
    if(a<b ) return a;
    else return b;
}
int main(void) {
//	freopen("uva.txt","rt",stdin);
    long long int  bal=0;
    map<string, double> li;
    map<string, double>::iterator it;
    char str[100];
    long long int test,con=0;
    cin>>test;
    if(test==0) {
        cout<<endl;
        return 0;
    }
    getchar();
    getchar();
    while(cin.getline(str,100)) {
        //cout<<str<<endl;
        if(cin.eof()) break;
        con++;
        if(0==strcmp(str,"")) {
            bal++;
            for(it=li.begin(); it!=li.end(); it++) {
                if(bal!=1) if(it==li.begin()) continue;
                cout<<it->first<<' ';
                printf("%.4lf\n",(it->second/(con-1))*100);
            }
            cout<<endl;
            li.clear();
            con=0;
        }
        li[str]++;
    }
    for(it=li.begin(); it!=li.end(); it++) {
        if(it==li.begin()) continue;
        cout<<it->first<<' ';
        printf("%.4lf\n",(it->second/(con))*100);
    }

    map<int , int>list_my;
    map<int , int>::iterator it; // eki rokom map er iterator
    for(it = list_my.begin();it!=list_my.end();it++){ // shurur address theke sesh er address porjoto nilam
        cout<<it->first<<" "<<it->second<<endl; // it->first holo index gula ar it->second holo content .. iterator pointer tai -> operator use korechi
    }




    return 0;
}

