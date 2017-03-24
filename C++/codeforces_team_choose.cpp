#include<iostream>
using namespace std;
int main(void)
{
	int n,sum=0,a,y;
	cin>>n>>y;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if((a+y)<=5) sum++;
	}   
	cout<<sum/3<<endl;
	return 0;
}
