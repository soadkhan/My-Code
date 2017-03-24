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
	
	
   freopen("uva.txt","rt",stdin);

   	long int n;
	   
	long int ara[90000];
	
		while(scanf("%ld",&n)==1)
		{
			
			
			for(long int i=0;i<n;i++)
			{
				cin>>ara[i];
			}
			
			if(n==1)
			{
				cout<<"Jolly"<<endl;
				continue;
				
			}
		    
		    long res[90000];
		    
		    res[0]=labs(ara[0]-ara[1]);
		    
		    for(long int i=1;i<n-1;i++)
		    {
		    	res[i]=labs(ara[i]-ara[i+1]);
		    }
		    
		    sort(res,res+n-1);
	
		 //  cout<<endl;
			int fl=0;
		   if(n==2)
		   {
		   	    if(res[0]==1) cout<<"Jolly"<<endl;
		   	    else cout<<"Not jolly"<<endl;
		   	    continue;
		   }
	   
		   if(res[0]==1)
		   {
		   	fl=0;
		   	    for(long int i=0;i<n-1;i++)
				{
				    if(res[i]!=i+1)
				    {
				    	fl=1;
				    	cout<<"Not jolly"<<endl;
				    	break;
				    }
					   
			    }	 
			    if(fl==0)
			    	cout<<"Jolly"<<endl;
		   }
		   
		   
		   if(res[0]==n-1)
		   {
		   	fl=0;
		   	    for(long int i=n-2;i>0;i--)
				{
				    if(res[i]!=n-i-1)
				    {
				    	fl=1;
				    	cout<<"Not jolly"<<endl;
				    	break;
				    }
					   
			    }	 
			    if(fl==0)
			    	cout<<"Jolly"<<endl;
		   }
		   
		   if(res[0]!=1&&res[0]!=n-1) cout<<"Not jolly"<<endl;
			
		}
		
	
	return 0;
}

