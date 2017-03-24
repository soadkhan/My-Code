#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;
long long int dif(long long int a,long long int b){if(a>b) return (a-b); else return (b-a);}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
int main(void)
{
 // freopen("uva.txt","rt",stdin);
	long long int a,b,con=0;
	while(4)
	{
		con++;
		cin>>a>>b;
		long long int m=min(a,b);
		long long int n=max(a,b); 
		if(a==-1&&b==-1){
			if(con==1) cout<<endl;
			return 0;
		}
		cout<<min(dif(m,n),dif(0,m)+dif(n,99)+1)<<endl;
	}
	return 0;
}

