#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>


using namespace std;


int main(void)
{
//	freopen("uva.txt","rt",stdin);
	cout<<"PERFECTION OUTPUT"<<endl;
	
	long int n,sum=0;
	
	while(4)
	{
		sum=0;
		cin>>n;
		if(n==0)
		{
			cout<<"END OF OUTPUT"<<endl;
			return 0;
		}
		for(long int i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum+=i;
			}
		}
		printf("%5d  ",n);
		if(sum==n) cout<<"PERFECT"<<endl;
        if(sum<n) cout<<"DEFICIENT"<<endl;
		if(sum>n) cout<<"ABUNDANT"<<endl;		
	}
	cout<<endl;
	
	
	return 0;
}

