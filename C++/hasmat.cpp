#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>


using namespace std;

long long int has(long long int a, long long int b)
{
	if(a>b) return (a-b);
	else return (b-a);
}

int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	
	 long long int n,m;
	 
	 while(2==scanf("%lld %lld",&n,&m))
	 {
	 	cout<<has(n,m)<<endl;
	 }
	
	return 0;
}

