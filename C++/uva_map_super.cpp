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
	long long int wo,te,a;
	char str[1000];
	map<string , long long int > li;
	cin>>wo>>te;
	if(wo==0&&te==0){
		cout<<endl;
		return 0;
	}
	for(long long int i=0;i<wo;i++){
		 cin>>str>>a;
		 li[str]=a;
	}
	long long int sum=0;
	long long int con=0;
	while(4)
	{
		char c;
		cin>>str;
		sum+=li[str];
		c=getchar();
		if(0==strcmp(str,".")){
			cout<<sum<<endl;
			sum=0;
			con++;
			if(con==te) break;
		}
	}
	return 0;
}

