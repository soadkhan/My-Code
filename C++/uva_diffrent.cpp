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

char str[10010];

long long int ans;

long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}

long long int sum_dig(long long int a)
{
	long long int sum=0;
	while(a){
		sum+=(a%10);
		a/=10;
	}
	return sum;
}
long long int str_num_sum()
{
	long long int sum=0,i=0;
	while(str[i]){
		sum+=str[i]-48;
		i++;
	}
	
	return sum;
}
int main(void)
{
 //  freopen("uva.txt","rt",stdin);
	long long int con=0;
	while(4)
	{
		ans=0;
		con++;
		cin>>str;
		if(0==strcmp(str,"0")){
			if(con==0) cout<<endl;
			return 0;
		}
		long long int temp=str_num_sum();
		if(temp%9==0){
			ans++;
			if(temp==9) goto m;
			while(4)
			{
				if(temp<9) break;
				temp=sum_dig(temp);
				if(temp==9) {ans++;break;}
				if(temp%9==0) ans++;
			}
		    m:cout<<str<<" is a multiple of 9 and has 9-degree "<<ans<<'.'<<endl;
		}
		else cout<<str<<" is not a multiple of 9."<<endl;
	}	
	return 0;
}

