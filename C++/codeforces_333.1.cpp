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
	
	long long int di1,di2,num1,num2,ba1,ba2,sum1=0,sum2=0;
	
	cin>>di1>>ba1;
	
	for(long long int i=1;i<=di1;i++)
	{
		cin>>num1;
		sum1+=( num1 * pw(ba1,(di1-i)) );
	}
     
     cin>>di2>>ba2;
	
	for(long long int i=1;i<=di2;i++)
	{
		cin>>num2;
		sum2+=( num2 * pw(ba2,(di2-i))  );
	}
	
	if(sum1==sum2) cout<<"="<<endl;
	if(sum1>sum2) cout<<">"<<endl;
	if(sum1<sum2) cout<<"<"<<endl;
	
	
	return 0;
}

