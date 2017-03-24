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

long long int ulta(long long int a)
{
	long long int sum=0;
	while(a){
	    sum=sum*10+a%10;
		a/=10;	
	}
	return sum;
}

int is_prime(long long int a)
{
	long long int sq=sqrt(a);
	if(a==1) return 0;
	if(a==2) return 1;
	if(a==3) return 1;
	if(a%2==0) return 0;
	else{
		for(long long int i=3;i<=sq;i+=2)
			if(a%i==0) return 0;
	}
	return 1;
}

int main(void)
{
	//freopen("uva.txt","rt",stdin);
	long long int n;
	while(cin>>n){
		if(1!=is_prime(n)){
			cout<<n<<" is not prime."<<endl;
			continue;
		}
		else{
			if(n==ulta(n)) cout<<n<<" is prime."<<endl; 
			else if(1==is_prime(ulta(n))) cout<<n<<" is emirp."<<endl;
			else cout<<n<<" is prime."<<endl; 
		}
	}
	return 0;
}

