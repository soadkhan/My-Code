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
//	freopen("uva.txt","rt",stdin);
	char names[110][111];
	char song[100][100]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
	long int n;
	cin>>n;
	if(n==0){
		cout<<endl;
		return 0;
	}
	for(long int i=0;i<n;i++)
		cin>>names[i];
	long int rep;
	if(n<=16) rep=1;
	else{
		if(n!=((n/16)*16)) rep=(n/16)+1;
		else rep=n/16;
	}
	long int ne=0,s=0;
	long int re=0;
	while(4){
         if(s%16==15) re++;		
		cout<<names[ne]<<": "<<song[s%16]<<endl;
		ne++;
		s++;
		if(ne==n){
			 ne=0;
		}
		if(re==rep) break;
		
	}
	return 0;
}

