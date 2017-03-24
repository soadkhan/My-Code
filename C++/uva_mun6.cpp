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
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
//int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
int main(void)
{
   //freopen("uva.txt","rt",stdin);
   char str[200];
   char c;
   int fl_lz=1,fl_pr=0;
   while(cin>>c>>str){
   	    fl_lz=1;
		fl_pr=0; 
   	    if(c=='0'&&strcmp(str,"0")==0) break;
   		long int l=strlen(str);
   		for(long int i=0;i<l;i++){
   			if(str[i]!=c&&str[i]!='0') fl_lz=0;
   			if(str[i]!=c&&fl_lz==0){
   				 cout<<str[i];
   				fl_pr=1;
   			}
   		}
   		if(fl_pr==0) cout<<0;
   		cout<<endl;	
   }
	return 0;
}

