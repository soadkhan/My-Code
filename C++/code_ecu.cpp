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
//	  freopen("uva.txt","rt",stdin);
    long long int n1,n2;
	long long int ara[200010];
	
	cin>>n1>>n2;
	for(long long int i=0;i<n1;i++)
	{
		cin>>ara[i];
	}
	
	sort(ara,ara+n1);	
	
    for(long long int i=0;i<n2;i++)
    {
    	long long int con=0,num;
    	cin>>num;
    	for(long long int j=0;j<n1;j++)
    	{
    		if(ara[j]<=num) con++;
    		else break;
    	}
    	
    	if(i!=n2-1) cout<<con<<" ";
    	if(i==n2-1) cout<<con<<endl;
    	
    }
	
	return 0;
}

