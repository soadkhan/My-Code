#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;

double pw(double a,double b)
{
	double sum=1;
	for(double i=0;i<b;i++)
	{
		sum*=a;
	}
	return sum;
}

int main(void)
{
	//  freopen("uva.txt","rt",stdin);
    int test;
	double a,b,r;
	cin>>test;
	if(test==0)
	{
		cout<<endl;
		return 0;
	}
	while(test--)
	{
		cin>>a>>b>>r;
		printf("%.2lf %.2lf\n",r-sqrt(pw(a,2)+pw(b,2)),r+sqrt(pw(a,2)+pw(b,2))) ;      
	}
    
	
	return 0;
}

