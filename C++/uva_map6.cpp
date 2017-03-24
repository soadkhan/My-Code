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
  //  freopen("uva.txt","rt",stdin);
	map<string , string>li;
	string ke,re,co;
	while(4){
		cin>>re;
		if('\n'==getchar()){
			co=re;
			break;
		}
		cin>>ke;
		getchar();
		li[ke]=re;
	}
	do{
		if(li.find(co)==li.end()) cout<<"eh"<<endl;
		else cout<<li[co]<<endl;
	}while(cin>>co);
	return 0;
}

