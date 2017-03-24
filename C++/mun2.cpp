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
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
int ulta(int a)
{
	if(a<100){
		int ans;
	    ans=a%10;
	    ans=(ans*10)+(a/10);
	    return ans;
	}
	else{
		int ans,s,d,e;
		e=a%10;
		a/=10;
		d=a%10;
		a/=10;
		s=a%10;
		ans=e*100+d*10+s;
		return ans;
	}
}
void strrev_v(char *p)
{
	char str[1010];
	long long int i;
	long long int l=strlen(p);
	for(i=0;i<l;i++) str[i]=p[l-i-1];
	str[i]='\0';
	strcpy(p,str);
}
int main(void)
{
	  freopen("uva.txt","rt",stdin);
	char str[1010];
	while(cin.getline(str,1010))
	{
		if(cin.eof()) break;
		strrev_v(str);
		int coded=0;
		if(str[strlen(str)-1]>='0'&&str[strlen(str)-1]<='9') coded=1;
		if(coded==1)
		{
				for(long long int i=0;str[i]!=' ';)
				{
					 if(str[i]=='1'){
					 	printf("%c",((str[i]-48)*100)+((str[i+1]-48)*10)+(str[i+2]-48));
					 	i+=3;
					 }
					 else {
					 	 printf("%c",((str[i]-48)*10)+(str[i+1]-48));
					 	 i+=2;
					 }
				}
		}
		else for(long long int i=0;i<strlen(str);i++) printf("%d",ulta(str[i]));
	    cout<<endl;
	}
	return 0;
}

