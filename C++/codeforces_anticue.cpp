#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>


using namespace std;


int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	long long int test,amount,con=0;
	long long int ara[60];
	cin>>test>>amount;
	for(long long int i=1;i<=test;i++)
	{
		long long int n,a,fl;
		fl=0;
		cin>>n;
		for(long long int j=0;j<n;j++)
		{
			cin>>a;
			if(a<amount)
			{
				fl=1;
			}
			
		}
		if(fl==1)
		{
			ara[con]=i;
			con++;
		}
		
	}
	cout<<con<<endl;
	for(long long int i=0;i<con;i++)
	{
		if(i!=con-1) cout<<ara[i]<<" ";
		else cout<<ara[i]<<endl;
	}
	
	

	
	return 0;
}

