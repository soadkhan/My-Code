#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>


using namespace std;




int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	
	long long int a,b,c;
	
	cin>>a>>b>>c;
	
	long long int sh,lo;
	
	if(a<b) 
	{
		sh=a;
		lo=b;
	}
	else 
	{
		sh=b;
		lo=a;
	}
	
	long long int ara[4];
	
	ara[0]=2*sh+2*lo;
	ara[1]=sh+c+lo;
	ara[2]=2*sh+2*c;
	
	sort(ara,ara+3);
	cout<<ara[0]<<endl;
	
	
	

	return 0;
}

