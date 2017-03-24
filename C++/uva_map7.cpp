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
//  freopen("uva.txt","rt",stdin);
	long int l,n;
	cin>>l>>n;
	map< string , string > li;
	string sin,plu,com;
	while(l--){
		cin>>sin>>plu;
		li[sin]=plu;
	}
	while(n--){
		cin>>com;
		long int l=strlen(com);
		if(li.find(com)!=li.end()) cout<<li[com]<<endl;
		else if(com[l-1]=='y'&&(com[l-2]!='u'&&com[l-2]!='o'&&com[l-2]!='i'&&com[l-2]!='e'&&com[l-2]!='a')){
			com[l-1]='i';
			cout<<com<<"es"<<endl;
		}
		else if(com[l-1]=='o'||com[l-1]=='s'||com[l-1]=='x') cout<<com<<"es"<<endl;
		else if(com[l-1]=='h'&&com[l-2]=='c') cout<<com<<"es"<<endl;
		else if(com[l-1]=='h'&&com[l-2]=='s') cout<<com<<"es"<<endl;
		else cout<<com<<"s"<<endl;
	}
	return 0;
}

