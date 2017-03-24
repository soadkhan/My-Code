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
	//freopen("uva.txt","rt",stdin);
	long long int test,con=0;
	long long int ara[12];
	char str[12][10000];
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}
	while(test--)
	{
		con++;
		long int max=-1;
		for(int i=0;i<10;i++)
		{
			scanf("%s",str[i]);
			cin>>ara[i];
			getchar();
			if(ara[i]>max) max=ara[i];
		}
		cout<<"Case #"<<con<<":"<<endl;
		for(int i=0;i<10;i++)
		{
			if(ara[i]==max) cout<<str[i]<<endl;
		}
	}
	return 0;
}

