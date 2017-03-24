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
 		
	double test,n,ara[10000],j;
	cin>>test;
	for(j=0;j<test;j++)	
	{
		cin>>n;
		double sum=0;
		for(long int i=0;i<n;i++)
		{
			cin>>ara[i];
			sum+=ara[i];
		}
		
	    sum/=n;
	  
	    double count = 0 ;
	    
	    for(long int i=0;i<n;i++)
	    {
	    	if(ara[i]>sum)
	    	{
	    		count++;
	    	}
	    }
		
		printf("%.3lf%\n",100*count/n);
		
			
	}
	
	
	
	return 0;
}

