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
	char str[100];
	char ans[100];	
	while(cin>>str)
	{
		long int l=strlen(str);
		for(long int i=0;i<l;i++){
			 if(str[i]=='B'||str[i]=='F'||str[i]=='P'||str[i]=='V') ans[i]='1';
			else if(str[i]=='C'||str[i]=='G'||str[i]=='J'||str[i]=='K'||str[i]=='Q'||str[i]=='S'||str[i]=='X'||str[i]=='Z') ans[i]='2';
			else if(str[i]=='D'||str[i]=='T') ans[i]='3';
			else if(str[i]=='L') ans[i]='4';
			else if(str[i]=='M'||str[i]=='N') ans[i]='5';
			else if(str[i]=='R') ans[i]='6';
			else ans[i]='0';
		}
		for(long int i=0;i<l;i++){
			if(i!=0&&ans[i]==ans[i-1]) continue;
			if(ans[i]!='0') cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}

