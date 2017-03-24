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
char str[200010];

void strlw(long long int l)
{
	for(long long int i=0;i<l;i++) if(str[i]>='A'&&str[i]<='Z') str[i]+=32;
}
int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	
	while(cin.getline(str,200010))
	{
		if(cin.eof()) break;
		long long int l=strlen(str);
		long long int fl=0;
		strlw(l);
		if(str[l-1]>='a'&&str[l-1]<='z') fl=1;
		for(long long int i=1;i<l;i++) if((str[i-1]>='a'&&str[i-1]<='z')&&(!((str[i]>='a'&&str[i]<='z')))) ++fl;
		cout<<fl<<endl;
	}

	return 0;
}

