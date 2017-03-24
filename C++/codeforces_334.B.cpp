#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;

long long int pw(long long int a,long long int b)
{
	long long int sum=1;
	for(long long int i=0;i<b;i++)
	{
		sum*=a;
	}
	return sum;
}

int strlen(string s)
{
    int len = 0;
    while (s[len])
        len++;
    return len;
}

long long int max(long long int a,long long int  b)
{
	if(a>b ) return a;
	else return b;
}

int main(void)
{
	//  freopen("uva.txt","rt",stdin);
     long long int n,box,fl=0;   
     long long int ara[100020];
     long long int mx_v,ans,mx=-1;
     cin>>n>>box;
     if(n/box==2) fl=1;
     
     for(long long int i=0;i<n;i++)
     		cin>>ara[i];
     
     mx_v = ara[n-1];
     if(n==box)
     {
     	cout<<mx_v<<endl;
     	return 0;
     }
     
     for(long long int i=0;i<n-box;i++)
     {
     	 long long int temp=ara[i] + ara[i+1];
     	 if(temp>mx) mx=temp;	
   	 }
     cout<<max(mx,mx_v)<<endl;	
	return 0;
}

