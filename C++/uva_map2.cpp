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
  //  freopen("uva.txt","rt",stdin);
	long long int test;
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}
	getchar();
	while(test--){
		long int l,max=0;
		map< char , long int > li;
		map< char , long int >::iterator it;
		char str[232];
		cin.getline(str,232);
		l=strlen(str);
		for(long int i=0;i<l;i++){
			if(str[i]>='A'&&str[i]<='Z') str[i]+=32;
			if(str[i]>='a'&&str[i]<='z') li[str[i]]++;
		}
		for(it=li.begin();it!=li.end();it++)
				if(it->second>max) max=it->second;
		for(it=li.begin();it!=li.end();it++)
				if(it->second==max) cout<<it->first;
		cout<<endl;
	}
	return 0;
}

