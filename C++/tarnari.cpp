#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	c=(a>b)?((a>c)?a:c):(b>c)?b:c;
	printf("%d",(a>b)?((a>c)?a:c):(b>c)?b:c);	
	return 0;
}
