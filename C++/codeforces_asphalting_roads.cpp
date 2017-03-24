#include<iostream>
using namespace std;

int main(void)
{
	int n,a,b,fl=0,ch_n=1;
	int arra[3000][2];
	cin>>n;
	cin>>arra[0][0]>>arra[0][1];
	cout<<1<<endl;
	for(int i=2;i<=n*n;i++)
	{
		
		fl=0;
		
		cin>>a>>b;
		
	//	cout<<a<<" _ "<<b<<endl;
		
		for(int j=0;j<ch_n;j++)
		{
			int c=arra[j][0];
			int d=arra[j][1];
			
			if(a==c||b==d)
			{
				 fl=1;
				 break;
				
			}
			
		}
		
		if(fl==0)
		{
			arra[ch_n][0]=a;
			arra[ch_n][1]=b;
	//		cout<<arra[ch_n][0]<<"__"<<arra[ch_n][1]<<endl;
			ch_n++;
			cout<<i<<endl;
		}
	
	}
	

	
	return 0;
}
