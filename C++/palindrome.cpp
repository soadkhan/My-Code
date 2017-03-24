#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int temp,dig,rev=0,n;
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		dig=temp%10;
		rev=rev*10+dig;
		temp/=10;
	}
	printf("%d",rev);
	return 0;
}
