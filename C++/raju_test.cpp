#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
	char a[900000],b[900000];
	int i,j,k,l1,l2,m,n,cnt;
	while(scanf("%s%s",a,b)==2)
	{
		l1=strlen(a);
		l2=strlen(b);
		if(l1>l2)
		{
			cout<<"No"<<"\n";
		}
	else
	{
		cnt=0;
		for(i=0,j=0;i<l2;i++)
		{
			if(a[j]==b[i])
			{
				cnt++;
				j++;
			}
			if(j>=l1)
			{
				break;
			}
		}
		if(cnt==l1)
		{
			cout<<"Yes"<<"\n";
		}
		else
		{
			cout<<"No"<<"\n";
		}
	}
}
return 0;
}
