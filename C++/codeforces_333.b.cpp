#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>


using namespace std;


long long int labs(long long int a)
{
	if(a<0) return a*-1;
	else return a;
}



int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	
	long long int n,ara[100010][2];
	cin>>n;
	
	for(long long int i=0;i<n;i++)
	{
		cin>>ara[i][0];
		ara[i][1]=i+1;
	}
    
    long int le=0,a,can1=0,can2=0;
    
    for(long long int i=0;i<n-1;i++)
    {
    	can1=0;
    	can2=0;
    	for(long long int j=i+1;j<n;j++)
    	{
    		
    	     if(labs(ara[i][0]-ara[j][0])<=1)
    	     {
    	     	if(ara[i][0]>ara[j][0]) can1=1;
    	     	if(ara[i][0]<ara[j][0]) can2=1;
    	        	
    	     	a=labs(ara[i][1]-ara[j][1])+1;
    	     	  
    	     	 if(can1==1&&can2==1) break; 
    	     	
    	     	 if(a>le)
				 {
				 	le=a;
				 }
				 
				 
				 
				 //	cout<<" members ="<<ara[i][0]<<' '<<ara[j][0]<<endl;
			//	 	cout<<labs(ara[i][0]-ara[j][0])<<endl;
			//	 	cout<<"len = "<<le<<endl;
				 
    	     	
    	     }
    	     
    	     else
    	     {
    	     	break;
    	     }
			 	
    	}
    	
    }
	
   cout<<le<<endl;;
	
	
	return 0;
}

