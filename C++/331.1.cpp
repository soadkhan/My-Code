#include<iostream>
#include<cstdio>
#include<algorithm>
//#include<cstring>
#include<math.h>
using namespace std;
int main(void)
{
	//freopen("uva.txt","rt",stdin);
    long long int test,arra[5][5],a,b;
    cin>>test;
    if(test==1)
	{
		cout<<-1<<endl;
		return 0;
	} 
	if(test==2)
	{
		long long int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a==c||b==d)
		{
			cout<<-1<<endl;
			return 0;
		}
		else
		{
			cout<<abs(a-c)*abs(b-d)<<endl;
			return 0;
		}
	}
	if(test==3)
	{
		long long int arra[4][4];
		for(long long int i=0;i<3;i++)
		{
			cin>>arra[i][0]>>arra[i][1];
			arra[i][2]=1;
		}
		int fl=0;
		int pos; // pos for first 1
		for(long long int i=1;i<3;i++)
		{
			if(arra[0][0]==arra[i][0]||arra[0][1]==arra[i][1])
			{
				fl++;
			}
			else pos=i;	
		}
	//	cout<<pos<<endl;
		if(fl==2)
		{
		//		cout<<"a";
			cout<<abs(arra[1][0]-arra[2][0])*abs(arra[1][1]-arra[2][1])<<endl;
			return 0;
		}
		if(fl==1)
		{
			 cout<<abs(arra[0][0]-arra[pos][0])*abs(arra[0][1]-arra[pos][1])<<endl;
			 return 0;
		}
		else
		{
			cout<<-1<<endl;
			return 0;
		}		
	}
	if(test==4)
	{	
			long long int arra[4][4];
		for(long long int i=0;i<4;i++)
		{
				cin>>arra[i][0]>>arra[i][1];
		}
		
		for(long long int i=1;i<4;i++)
		{
			if(arra[i][0]==arra[0][0]||arra[i][1]==arra[0][1])
			{
				continue;
			}
			else
			{
				cout<<abs(arra[0][0]-arra[i][0])*abs(arra[0][1]-arra[i][1])<<endl;
				return 0;
			}
			cout<<-1<<endl;
			return 0;
		}
	}
	return 0;
}

