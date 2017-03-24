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
//	  freopen("uva.txt","rt",stdin);
	long long int a,b,c,d,li,con=0;
	while(4)
	{
		con++;
		cin>>a>>b>>c>>d>>li;
		if(a==0&&b==0&&c==0&&d==0&&li==0){
			if(con==1) cout<<endl;
			return 0;
		}
		
	    long long int ans=0;
		for(long long int i=0;i<=li;i++)
			if(  ((a*i*i)+(b*i)+c)%d==0 ) ans++;
		cout<<ans<<endl;
	}
	return 0;
}

