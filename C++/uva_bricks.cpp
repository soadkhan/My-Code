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
	 // freopen("uva.txt","rt",stdin);
	long long int n,con=0,ara[70];
	while(4)
	{
		con++;
		cin>>n;
		if(n==0){
			if(con==1) cout<<endl;
			return 0;
		}
		long long int sum=0;
		for(long long int i=0;i<n;i++)
		{
			cin>>ara[i];
			sum+=ara[i];
		}
		sum/=n;
		long long int ans=0;
		for(long long int i=0;i<n;i++)
			if(ara[i]>sum) ans+=(ara[i]-sum);
		
		cout<<"Set #"<<con<<endl;
		cout<<"The minimum number of moves is "<<ans<<"."<<endl<<endl;
	}
	return 0;
}

