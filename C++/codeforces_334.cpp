#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;

double max(double a,double b)
{
	if(a>b ) return a;
	else return b;
}

int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	
	double max_po[7]={500,1000,1500,2000,2500};
	double ac[7];
	double wa[7];
	double sum=0,hac,un;
	
	for(int i=0;i<5;i++)
	      cin>>ac[i];
	      
    for(int i=0;i<5;i++)
    	  cin>>wa[i];
    	  
    cin>>hac>>un;
    	  
     
     for(int i=0;i<5;i++)
     {
        double a=(( (250-ac[i]) / 250   )*max_po[i]) - (50 * wa[i]);
        
     	sum+=max( 0.3*max_po[i] ,  a  );

     }
     
     sum+=(hac*100);
     sum-=(un*50);
     
     cout<<sum<<endl;

	
	return 0;
}

