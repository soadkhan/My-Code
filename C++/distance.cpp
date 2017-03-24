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
	
	long long int v,t;
	
	while(2==scanf("%lld %lld",&v,&t))
	{
		cout<<v*t*2<<endl;
	}
	
	return 0;
}

