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
int main(void)
{
//	freopen("uva.txt","rt",stdin);
	
	long long int a,test,com,sum=0;
	long long int ara[1000];
	char str[100];
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}
	while(test--){
	     cin>>com;
	     sum=0;
	     for(long long int i=0;i<com;i++){
	     	cin>>str;
	     	if(str[0]=='R'){
	     		ara[i]=1;
	     		sum+=1;
	     	}
	     	else if(str[0]=='L'){
	     		ara[i]=-1;
	     		sum+=-1;
	     	}
	     	else if(str[0]=='S'){
	     		cin>>str;
	     		cin>>a;
	     		ara[i]=ara[a-1];
	     		sum+=ara[a-1];
	     	}
	     }
	     cout<<sum<<endl;
	}
	return 0;
}

