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
	
	long long int i;
	while(1==scanf("%lld",&i))
	{
		    if(i<=0) 
		    {
		    	cout<<endl;
		    	continue;
		    }
			cout<<(i*(i+1)/2)*(i*(i+1)/2)<<endl;
			
		
	}	

	
	return 0;
}

