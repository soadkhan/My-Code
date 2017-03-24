#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	unsigned long long int ara[6],sum=0;
	char str[110000];
	cin>>ara[1]>>ara[2]>>ara[3]>>ara[4];
	getchar();
	gets(str);
	for(unsigned long long int i=0;i<strlen(str);i++){
		sum=sum+ara[str[i]-48];
	}
	cout<<sum<<endl;
	return 0;
}
