#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>
using namespace std;
long long int go(long long int a)
{
	long long int n=0;
	while(a){
		n+=a%10;
		a/=10;
	}
	if(n<10) return n;
	else return(go(n));
}
int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	long long int n,con=0;
	while(4){
		cin>>n;
		con++;
		if(n==0){
			if(con==1) cout<<endl;
			return 0;
		}
		cout<<go(n)<<endl;
	}
	return 0;
}

