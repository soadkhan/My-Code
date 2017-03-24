#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
	double n,sum=0,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		sum+=a;
	}
	printf("%.12lf\n",sum/n);
	return 0;
}
