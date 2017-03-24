#include<iostream>
using namespace std;
int main(void)
{
	int n,ara[2000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ara[i];
	}
	for(int i=0;i<n;i++)
	{
		int con=1;
		for(int j=0;j<n;j++)
		{
			if(ara[i]<ara[j])
			{
				con++;
			}
		}
		cout<<con<<" ";
	}
	cout<<endl;
	return 0;
}
