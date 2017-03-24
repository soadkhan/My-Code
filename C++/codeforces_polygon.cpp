#include<iostream>
using namespace std;
int main(void)
{
	int  n;
	int ara[190];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>ara[i];
	}
	for(int i=0;i<n;i++)
	{
		if(360%(180-ara[i])==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
