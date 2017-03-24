#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>

using namespace std;
long int sq(long int i)
{
	return i*i;
}


int main(void)
{
//	  freopen("uva.txt","rt",stdin);//Case 1: 9
    
	long int test,a,b;
	
	cin>>test;
	
	for(long int i=0;i<test;i++)
	{
		 long int temp;
		 
		 if(a>b) 
		 {
		 	temp=b;
		 	b=a;
		 	a=temp;
		 }
		 cin>>a>>b;
		 
		 cout<<"Case "<<i+1<<": "<<(sq((b+1)/2)-sq(a/2))<<endl;
		
		
		
	}	

	
	return 0;
}

