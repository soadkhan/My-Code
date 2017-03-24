#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;
long long int ulta(long long int a)
{
	long long int m=0;
	while(a)
	{
		m=m*10+a%10;
		a/=10;
	}
	return m;
}

int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	long long int test,n,m,con;
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}
	for(long long int i=1;i<=test;i++){
		cin>>n;
		con=0;
		if(n<10&&n>=0) {
			cout<<0<<" "<<n<<endl;
			continue;
		}
		while(n!=ulta(n)){
			n+=ulta(n);
			con++;
		}
		cout<<con<<" "<<n<<endl;
	}	
	return 0;
}

