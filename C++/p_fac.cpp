#include<iostream>
#include<cstdio>
using namespace std;
int main(void)
{
	int a;
	cin>>a;
	for(int i=2;i<a;i++){
		while(a%i==0){
			printf("%d\n",i);
			a/=i;
		}
	}
	
	return 0;
}

