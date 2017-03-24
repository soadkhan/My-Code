#include<iostream>
using namespace std;
int main(void)
{
    int ara[110][2];
    int n,con,day,temp;
	cin>>n>>day;
	for(int i=0;i<n;i++)
	{
		cin>>ara[i][0];
		ara[i][1]=i+1;	
	} 
	for(int i=n-2;i>=0;i--)
	{	
		for(int j=0;j<=i;j++)
		{
			if(ara[j][0]>ara[j+1][0])
			{
				 temp=ara[j+1][0];
				 ara[j+1][0]=ara[j][0];
				 ara[j][0]=temp; 
			     temp=ara[j+1][1];
				 ara[j+1][1]=ara[j][1];
				 ara[j][1]=temp; 	  	  
			}
		}	
	}
	int fl=0;
	con=0;
	for(int i=0;i<n;i++)
	{
		 con=con+ara[i][0];
		 if(con>day)
		 {
		 	fl=1;
		 	con=i;
		 	break;
		 }     	  
	}
	if(fl==0) con=n;
	cout<<con<<endl;
	for(int i=0;i<con;i++)
	{
		cout<<ara[i][1]<<" ";
	}
	cout<<endl;
	return 0;
}
