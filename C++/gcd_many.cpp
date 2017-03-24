#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,temp,n;
	cin>>n>>a;
	for(int i=1;i<n;i++){
		cin>>b;
		while(b!=0){
			temp=a%b;
			a=b;
			b=temp;
		}
	}
	cout<<a<<endl;
	return 0;
}
