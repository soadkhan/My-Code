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
int is_prime(long int a){
	if(a==1) return 0;
	else if(a==2) return 1;
	else if(a==3) return 1;
	else if(a%2==0) return 0;
	else{
	      for(long int i=3;i<=sqrt(a);i+=2)
	      		if(a%i==0) return 0;
	}
	return 1;
}
int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	 char str[2040];
	 long int test;
	 cin>>test;
	 if(test==0){
	 	cout<<endl;
	 	return 0;
	 }	
	 for(long int con=1;con<=test;con++){
	 		cin>>str;
	 		map< char , long int > li;
            map< char , long int >::iterator it;
	 		long int l=strlen(str),fl=1;
	 		for(long int i=0;i<l;i++) li[str[i]]++;
	 		cout<<"Case "<<con<<": ";		
	 		for(it=li.begin();it!=li.end();it++)
	 				if(1==is_prime(it->second)){
	 					 cout<<it->first;
	 					 fl=0;
	 				}
	 	    if(fl==1) cout<<"empty"<<endl;
	 	    else cout<<endl;
	 }
	return 0;
}

