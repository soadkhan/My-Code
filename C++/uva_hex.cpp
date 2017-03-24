#include<new>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<cstdio>
#include<cstdlib>
using namespace std;
char str[1100];
void tar(long int n)
{
	 long int i=0;
	while(n)
	{
		str[i]=(n%2)+48;
		n/=2;
		i++;
	}
	str[i]='\0';
}
void strrev(void)
{
	long int l=strlen(str);
	char str2[1100];
	long int i=l-1,j=0;
	while(i>=0)
	{
		str2[j]=str[i];
		--i;
		++j;
	}
	str2[j]='\0';
	strcpy(str,str2);
}
int main(void)
{
	//freopen("uva.txt","rt",stdin);
	long int a,b,test;
	char c;
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}
	while(test--){
		scanf("%lx",&a);
		cin>>c;
		scanf("%lx",&b);
		tar(a);
		strrev();
		int pr=strlen(str);
		for(int i=0;i<13-pr;i++)
		     cout<<'0';
	    cout<<str<<' '<<c<<' ';
			tar(b);
			strrev();
		pr=strlen(str);
		for(int i=0;i<13-pr;i++)
		     cout<<'0';	
		cout<<str<<" = ";
		if(c=='+') cout<<a+b<<endl;
		else cout<<a-b<<endl;
	}
	return 0;
}
