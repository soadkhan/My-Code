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
    
		long long int n1,n2,first,second;
		
		long long int ara1,ara2[100010],num1,numbig,num2;
		
		cin>>n1>>n2>>first>>second;
		for(long long int i=0;i<n1;i++)
		{
			cin>>ara1;
			if(i+1==first)
			{
				num1=ara1;
			}
		}
        
        
    	for(long long int i=0;i<n2;i++)
		{
			cin>>ara2[i];
		   if(n2-second==i)
		   {
		   	    numbig=ara2[i];
		   }	
		}
		
		

	    if(num1<numbig)
	    	cout<<"YES"<<endl;
	    
	    else
			cout<<"NO"<<endl;
	    
	return 0;
}

