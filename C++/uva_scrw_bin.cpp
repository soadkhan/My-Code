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
long long int st_bin(char *p)
{
	long long int l=strlen(p),a=1;
	long long int sum=0;
	for(long long int i=0;i<l;i++) sum+=( (p[i]-48)*( (a<<(l-i)) -1)  );
	return sum;
}
int main(void)
{
	 //freopen("uva.txt","rt",stdin);
	long long int con=0;
	char str[200010];
	while(cin>>str)
	{
		con++;
		if(strcmp(str,"0")==0){
			if(con==1) cout<<endl;
			return 0;
		}
		cout<<st_bin(str)<<endl;	
	}
	return 0;
}

