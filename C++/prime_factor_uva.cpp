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
int is_prime(long long int a){
	if(a==1) return 0;
	else if(a==2) return 1;
	else if(a==3) return 1;
	else if(a%2==0) return 0;
	else{
	      for(long long int i=3;i<=sqrt(a);i+=2)
	      		if(a%i==0) return 0;
	}
	return 1;
}
long long int pri(long long int a)
{
	long long int con=0;
	if(a==1) return 0;
	for(long long int i=2;i<=a;i++)
		if(a%i==0&&1==is_prime(i)){
			a=a/i;
			con++;
		}
	return con;
}
int main(void)
{
    //freopen("uva.txt","rt",stdin);
	long long int con=0,a;
	while(cin>>a)
	{
		con++;
		if(a==0){
			if(con==1) cout<<endl;
			return 0;
		}
		if(a==1)  cout<<a<<" : "<<0<<endl;
		else cout<<a<<" : "<<pri(a)<<endl;
	}
	return 0;
}

