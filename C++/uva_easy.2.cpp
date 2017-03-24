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
	long long int test,n,p,q,sum=0,ara[40][3];
	long long int con=0;

		
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}
	
	for(long long int i=1;i<=test;i++)
	{
		cin>>n>>p>>q;
		long long int pos;
		sum=0;
		for(long long int j=0;j<n;j++){
			cin>>ara[j][0];
			sum+=ara[j][0];
			ara[j][1]=sum;
		}
		if(n<=p) pos=n-1;
		else pos=p-1;
		int fl=0;N
		long long int j;
		for( j=pos;j>=0;j--)
		       if(ara[j][1]<=q){
		       	fl=1;
		       	break;
		       }
		       cout<<"Case "<<i<<": ";
	 if(fl==1) cout<<j+1<<endl;
	 else cout<<0<<endl;
	}
	
	return 0;
}

