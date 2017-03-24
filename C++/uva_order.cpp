#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>
using namespace std;
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b); else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	long long int test;
	long long int ara[12];
	long long int fli=0,flde=0,fleq=0;
	cin>>test;
	if(test==0)
	{
		cout<<endl;
		return 0;
	}
	cout<<"Lumberjacks:"<<endl;
	while(test--)
	{
		for(int i=0;i<10;i++)
			cin>>ara[i];
		fli=0;
		flde=0;
		fleq=0;
		for(int i=0;i<9;i++)
		{
			if(ara[i]<ara[i+1]) flde=1;
			if(ara[i]>ara[i+1]) fli=1;
			if(ara[i]!=ara[i+1]) fleq=1;
		}
		if(fli==1&&flde==1&&fleq==1) cout<<"Unordered"<<endl;
		else cout<<"Ordered"<<endl;
	}
	
	return 0;
}

