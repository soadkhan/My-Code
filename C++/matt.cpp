#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int mat[12][12];
	int tran[12][12];
	int r,c;
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>mat[i][j];
		}
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			tran[j][i]=mat[i][j];
		}
	}
	
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			cout<<tran[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	return 0;
}
