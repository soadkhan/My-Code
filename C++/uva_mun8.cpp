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
	long long int n,r,con=0;
	while(cin>>r>>n){
		con++;
		if(n==0&&r==0){
			if(con==1) cout<<endl;
			return 0;
		} 
		cout<<"Case "<<con<<": ";
		if(n>=r){
			cout<<0<<endl;
			continue;
		}
		long long int fl=1;
		long long int ex=r-n;
		if((ex%n)==0) fl=0;
		long long int fol=(ex/n)+fl;
		if(fol<=26) cout<<fol<<endl;
		else cout<<"impossible"<<endl;
	}
	return 0;
}

