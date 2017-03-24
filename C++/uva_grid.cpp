#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;

int main(void)
{
	// freopen("uva.txt","rt",stdin);
     
     long long int n,con=0;
     while(4)
     {
     	cin>>n;
     //	cout<<n;
     	con++;
     	if(n==0)
     	{
     		if(con==1) 
			{
				cout<<endl;
				return 0;
     		}
     		else
     		{
     			return 0;
     		}
     	}
     	
		 	cout<<((n+1)*n*(2*n+1))/6<<endl;
     }
		

	
	return 0;
}

