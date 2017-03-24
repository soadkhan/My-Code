#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>


using namespace std;

long long int value(long long int i)
{
	long long int con=1;
	
	while(i!=1)
	{
		con++;
		if(i%2==0) 
		{
		
			i=i/2;
			continue;
		}
		
		else
		{
			i=3*i+1;
			continue;
		}
		
	}
	
	return con;
	
	
}





int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	
	long long int a,b,temp;
    while(2==scanf("%lld %lld",&a,&b))
    {
    	long long int m,n;
    	if(a<b)
    	{
 		    m=b;					// m boro n choto   		
    		n=a;
    	}
    	
    	else
    	{
    		m=a;
    		n=b;
    	}
    	long long int max=1;
    	
    	for(long long int i=n;i<=m;i++)
    	{
    		if(max<value(i)) max=value(i);
    	}
    	
    	cout<<a<<" "<<b<<" "<<max<<endl;
    	
    	
    }
    
    
    
	return 0;
}

