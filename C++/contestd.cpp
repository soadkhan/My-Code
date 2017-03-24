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
long long int ara[100000];
int main(void)
{
	//freopen("uva.txt","rt",stdin);
	long long int test,con=0;
	cin>>test;
	while(test--){
		con++;
		cout<<"Case #"<<con<<":";
		long long int a,b;
		cin>>a>>b;
		long long int fl=a-b,l=0;
		if(fl==0){
			cout<<" "<<0<<endl;
			continue;
		}
		
		for(long long int i=1;i<=sqrt(fl);i++){
			if(fl%i==0){
				ara[l]=i;
				l++;
				if(fl/i!=i){
					ara[l]=fl/i;
					l++;
				}
			}
		}
		sort(ara,ara+l);
		for(long long int i=0;i<l;i++)
			if(ara[i]>b)
				cout<<" "<<ara[i];
		cout<<endl;
	}
	return 0;
}

