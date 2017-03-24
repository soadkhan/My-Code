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
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
int main(void)
{
//	freopen("uva.txt","rt",stdin);
	map<string,int>li;
	map<string,int>::iterator it;
	char str[1000];
	char str2[6000];
	int fl=0;
	long long int l=0;
	char c;
	while(c=getchar()){
		if(c==EOF) break; 
	    if(c>='a'&&c<='z') fl=1;
	    if(c>='A'&&c<='Z') fl=1;
	    if(fl==1){
	        if(c>='A'&&c<='Z') c+=32;
	        if(c>='a'&&c<='z'){
	    	   str2[l]=c;
	    	   l++;
	        }
	        else {
	        	str2[l]='\0';
	    	    l=0;
	    	    li[str2]=0;
	       }  	
	    }
	    
	}
	str2[l]='\0';
	li[str2]=0;
	for(it=li.begin();it!=li.end();it++){
		if(it!=li.begin()) cout<<it->first<<endl;
	}
	    
	return 0;
}

