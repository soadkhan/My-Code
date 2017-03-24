#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<map>

using namespace std;

int main(void)
{
	 // freopen("uva.txt","rt",stdin);
	int r,c;
	char str[12][12];
	cin>>r>>c;
	getchar();
	for(int i=0;i<r;i++)
	{
		cin.getline(str[i],12);
	}
	int conf=0,conte;
	for(int i=0;i<r;i++)
	{
		conte=0;
		int fl=0;
		for(int j=0;j<c;j++)
		{
			if(str[i][j]=='.')
			{
				str[i][j]='a';
				conte++;
			}			
			if(str[i][j]=='S') 
			{
				fl=1;
				break;
			}
		}
		
		if(fl==0)
		{
	
			conf+=conte;
		}
		
		if(fl==1)
		{
			for(int j=0;j<c;j++)
		    	if(str[i][j]=='a')	str[i][j]='.';
		}
		
	}
	for(int i=0;i<c;i++)
	{
		conte=0;
		int fl=0;
		for(int j=0;j<r;j++)
		{
			if(str[j][i]=='.')
			{
				str[j][i]='a';
				conte++;
			}			
			if(str[j][i]=='S') 
			{
				fl=1;
				break;
			}
		}
		
		if(fl==0)
		{
			conf+=conte;
		}
		
	}
    	
    cout<<conf<<endl;
	
	return 0;
}

