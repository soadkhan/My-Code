#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>
using namespace std;
long long int man(char *str){
	long long int sum=0,i=0;
		while(str[i]!='\0')
		{
			if(str[i]>='a'&&str[i]<='z') sum+=(str[i]-'a'+1);
			i++;
		}
		return sum;
}
void strlor(char *str)
{
	long long int i=0;
	while(str[i]!='\0')
	{
		if(str[i]<='Z'&&str[i]>='A') str[i]-=('A'-'a');
		i++;
	}
}
long long int go(long long int a)
{
	long long int sum=0;
	while(a)
	{
		sum+=a%10;
		a/=10;
	}
	if(sum<=9) return sum;
	else return go(sum);
}
long long int max(long long int a,long long int  b)
{
	if(a>b ) return a;
	else return b;
}
long long int min(long long int a,long long int  b)
{
	if(a<b ) return a;
	else return b;
}
int main(void)
{
 // freopen("uva.txt","rt",stdin);
	char str1[30];
	char str2[30];
	while(cin.getline(str1,30),cin.getline(str2,30))
	{
		if(cin.eof()) break;
		strlor(str1);
		strlor(str2);
		double mx,mn;
		mx=(double)max(go(man(str1)),go(man(str2)));
		mn=(double)min(go(man(str1)),go(man(str2)));
		printf("%.2lf %\n",(mn/mx)*100);
	}
	return 0;
}

