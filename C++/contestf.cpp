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
	//freopen("uva.txt","rt",stdin);
	long long int test;
	map<long long int ,string > li;
	map<long long int ,string >::iterator it;
	string str;
	long long int d,m,y;
	cin>>test;
	while(test--){
		cin>>str;
		cin>>d>>m>>y;
		long long int ans=d+(m*30)+(y*12*30);
		li[ans]=str;
	}
	it=li.end();
	it--;
	cout<<it->second<<endl;
	it=li.begin();
	cout<<it->second<<endl;
	return 0;
}

