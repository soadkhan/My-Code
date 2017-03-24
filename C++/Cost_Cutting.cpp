#include<iostream>
#include<cstdio>
#include<algorithm>
//#include<cstring>


using namespace std;


int main(void)
{
	
	//  freopen("uva.txt","rt",stdin);
    
	  long long int test,arra[5];
	  
	  cin>>test;
	  if(test<=0)
	  {
	  	    printf("\n");
	  		return 0;
	  }  	
	
	  for(long long int i=1;i<=test;i++)
	  {
	  	//Case 1: 2000
	  		cin>>arra[0]>>arra[1]>>arra[2];
	  		sort(arra,arra+3);
	  		cout<<"Case "<<i<<": "<<arra[1]<<endl;
	  		
	  }
	
	
	return 0;
}

