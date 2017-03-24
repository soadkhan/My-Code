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
	long long int a,b;
	long long int con;
	while(cin>>a>>b){
		con=0;
		for(long long int i=a;i<=b;i++){
			map<long long int ,int>li;
			long long int c=0; 
			long long int k,k1;
			k1=i;
			while(k1){
				k=k1%10;
				li[k]=0;
				k1/=10;
				c++;
			}
			if(c==li.size()) con++;
		    li.clear();
		}
		cout<<con<<endl;
	}
	return 0;
}

