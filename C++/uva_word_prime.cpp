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
char str[25];
long int l;
long int str_num(void)
{
	long int sum=0;
	for(long int i=0;i<l;i++){
		if(str[i]>='a'&&str[i]<='z') sum+=( (str[i]-'a')+1);
		else if(str[i]>='A'&&str[i]<='Z') sum+=( (str[i]-'A')+27  );
	}	
	return sum;
}
int is_prime(long int a){
	if(a<=3) return 1;
	else if(a%2==0) return 0;
	else{
	      for(long int i=3;i<=sqrt(a);i+=2)
	      		if(a%i==0) return 0;
	}
	return 1;
}
int main(void)
{
//	  freopen("uva.txt","rt",stdin);
 	while(cin>>str){
 		l=strlen(str);
 		if(1==is_prime(str_num())) cout<<"It is a prime word."<<endl;
 		else cout<<"It is not a prime word."<<endl;
 	}
}

