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
	long long int test,n,a;
	char str[100];
	cin>>test;
	for(long long int cas=1;cas<=test;cas++){
		map<string , long long int >li;
		cin>>a;
		long long int b;
		while(a--){
			cin>>str>>b;
			li[str]=b;
		}
		cin>>b;
		cin>>str;
		cout<<"Case "<<cas<<": ";
		if(li.find(str)==li.end()) cout<<"Do your own homework!"<<endl;
		else if(li[str]<=b) cout<<"Yesss"<<endl;
		else if(li[str]<=(b+5)) cout<<"Late"<<endl;
		else if(li[str]>(b+5)) cout<<"Do your own homework!"<<endl;
		li.clear();
	}
	return 0;
}

