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
	//freopen("uva.txt","rt",stdin);
	long long int test,con=0;
	cin>>test;
	while(test--){
		con++;
		long long int a,b;
		cin>>a>>b;
		long long int fl=1;
		if(b!=0) fl=2;
		a-=b;
		long long int ar[10000];
		long long int c=0;
		for(long long int i=fl;i<a;i++)
		{
			if(a%i==0){
				ar[c]=a/i;
				c++;
			}
		}
		if(b==0){
			ar[c]=1;
			c++;
		}
		sort(ar,ar+c);
		cout<<"Case "<<con<<": ";
		if(a==b){
			cout<<0<<endl;
			continue;
		}
		for(long long int i=0;i<c;i++){
			if(i!=c-1) cout<<ar[i]<<" ";
			else cout<<ar[i]<<endl;
		}	
	}
	return 0;
}

