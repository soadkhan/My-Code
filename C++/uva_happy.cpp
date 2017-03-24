#include<iostream>
using namespace std;
long long int re;
long long int rec(long long int a)
{
	long long int sum=0;
	while(a)
	{
		sum+=(a%10)*(a%10);
		a/=10;
	}
	if(sum==1) return 1;
	else if(sum==re) return 0;
	else rec(sum);
}
int main(void)
{
//	  freopen("uva.txt","rt",stdin);
	long long int test,a;
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}
	for(long long int i=1;i<=test;i++)
	{
		cin>>a;
		re=a;
		if(1==rec(a)) cout<<"Case #"<<i<<": "<<re<<" is a Happy number."<<endl;
		else cout<<"Case #"<<i<<": "<<re<<" is an Unhappy number."<<endl;
	}
	return 0;
}

