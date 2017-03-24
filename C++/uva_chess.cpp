#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>

using namespace std;

int main(void)
{
	//  freopen("uva.txt","rt",stdin);
    
	long long int test,a,b,temp;
	char c;
	cin>>test;
	if(test<=0)
	{
		cout<<endl;
		return 0;
	}
	
	getchar();
	
	for(long long int i=0;i<test;i++)
	{
		 cin>>c;
		 cin>>a>>b;
		 getchar();
		
	//	cout<<c<<" "<<a<<' '<<b<<endl;
	     if(a>b)
	     {
	     	temp=b;
	     	b=a;
	     	a=temp;
	     }
	     
	     if(c=='r'||c=='Q')
	     {
	     	cout<<a<<endl;
	     }
	     
	     if(c=='K')
	     {
	         cout<<((a+1)/2)*((b+1)/2)<<endl;
	     }
	     
	     if(c=='k')
	     {
	     	 cout<<((a*b)+1)/2<<endl;
	     }
	
	
	}
		
	return 0;
}

