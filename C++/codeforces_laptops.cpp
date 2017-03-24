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
	long int test;
	long int pr,q;
	map<long int , long int > li;
	map<long int , long int >::iterator i,j;	  
	cin>>test;
	if(test==1){
		cout<<"Poor Alex"<<endl;
		return 0;
	}
	while(test--){
		cin>>pr>>q;
		li[pr]=q;
	}
	int fl=0;
	for(i=li.begin();i!=li.end();i++)
		for(j>i;j!=li.end();j++)
			{
				
			}
	  
	return 0;
}

