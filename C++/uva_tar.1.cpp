#include<new>
#include<sstream>//
#include<cstdlib>
#include<cctype>//
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>//
#include<iostream>
#include<fstream>//
#include<numeric>//
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>//
#include<cstdio>
#include<cstdlib>
using namespace std;
char str[110000];

void tar(long long int n)
{
	long long int i=0;
	while(n)
	{
		str[i]=(n%3)+48;
		n/=3;
		i++;
	}
	str[i]='\0';
}

void strrev(void)
{
	long long int l=strlen(str);
	char str2[110000];
	long long int i=l-1,j=0;
	while(i>=0)
	{
		str2[j]=str[i];
		--i;
		++j;
	}
	str2[j]='\0';
	strcpy(str,str2);
}

long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
int main(void)
{
	// freopen("uva.txt","rt",stdin);
    long long int n,con=0;
	while(4){
		cin>>n;
		
		con++;
		if(n<0){
			if(con==1) cout<<endl;
			return 0;
		}
		if(n==0){ cout<<0<<endl; goto m;}
		tar(n);
		strrev();
		cout<<str<<endl;
		m:;
	}	

	return 0;
}

