#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>

using namespace std;

int main(void)
{
//	  freopen("uva.txt","rt",stdin);
	
	long long int test,a,b,max;
	char c;
	cin>>test;
	if(test<=0)
	{
		cout<<endl;
		return 0;
	}
	for(long long int i=0;i<test;i++)
	{
	
		cin>>max;
	    while(4)
	    {  
			c=getchar();
			
			if(c=='\n')
			{
				cout<<"Case "<<i+1<<": "<<max<<endl;
				break;
			}
			else
			{
				cin>>a;
				if(a>max)	max=a;
			}
	 
		}
	}
	return 0;
}

