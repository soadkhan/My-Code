#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;

long long int max_v(long long int a,long long int  b)
{
	if(a>b ) return a;
	else return b;
}

long long int min_v(long long int a,long long int  b)
{
	if(a<b ) return a;
	else return b;
}


long long int fix(long long int a,long long int b)
{
	return(  ( (a*b)+1 )/2  );
}

long long int go(long long  int i)
{
	if(i==0) return 0;
	if(i==1) return 2;
	if(i==2||i==3) return 4;
}

int main(void)
{
	//  freopen("uva.txt","rt",stdin);
    long long int con=0,a,b,mx,mn;
	while(4)
	{
		cin>>a>>b;
		con++;
		
		if(a==0&&b==0)
		{
			if(con==1) cout<<endl;
			return 0;
		}
		
		mx=max_v(a,b);
		mn=min_v(a,b);
		if(mn==0) printf("%lld knights may be placed on a %lld row %lld column board.\n",0,a,b);
		else if(mn==1) printf("%lld knights may be placed on a %lld row %lld column board.\n",mx,a,b);//cout<<mx<<endl;
		else if(mn==2) printf("%lld knights may be placed on a %lld row %lld column board.\n",((mx/4)*4)+go(mx%4),a,b); 
		else if(mx>=3&&mn>=3) printf("%lld knights may be placed on a %lld row %lld column board.\n",fix(mx,mn),a,b);//cout<<fix(mx,mn)<<endl;
	//	else printf("%lld knights may be placed on a %lld row %lld column board.\n",max_v(mx+1,fix(mx,mn)),a,b);//cout<<max_v(mx+1,fix(mx,mn))<<endl;	
		
	}	

	return 0;
}

