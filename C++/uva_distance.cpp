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
///	  freopen("uva.txt","rt",stdin);
      long long int test,max,min,a;
	  cin>>test;
	  if(test<=0)
	  {
	  	cout<<endl;
	  	return 0;
	  }
	  
	  for(long long int i=0;i<test;i++)
	  {
	  	long long int n;
	  	cin>>n;
	  	cin>>a;
	    max=a;
	    min=a;
	    for(long long int j=0;j<n-1;j++)
	    {
	    
	  	   cin>>a;
	  	   if(a>max) max=a;
	  	   if(a<min) min=a;
	  	
		}
		cout<<(max-min)*2<<endl;
		
	  }	


	
	return 0;
}

