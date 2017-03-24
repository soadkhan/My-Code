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
    long int test,n,a,b;
	cin>>test;
	if(test<=0)
	{
		cout<<endl;
		return 0;
	}
	for(long int i=1;i<=test;i++)
	{
		cin>>n;
		cin>>a;
		long int up=0,dw=0;
		for(long int j=1;j<n;j++)
		{
			cin>>b;
			if(b>a) up++;
			if(b<a) dw++;
			a=b;
		}
		cout<<"Case "<<i<<": "<<up<<" "<<dw<<endl;
		
	}	

	
	return 0;
}

