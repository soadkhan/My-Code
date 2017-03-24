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
	long long int test;
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}
	getchar();
	long long int m,f;
	char str[4];
	while(test--)
	{
			m=0,f=0;
		while(4)
		{
		
			cin>>str;
			if(strcmp(str,"MF")==0||strcmp(str,"FM")==0){
				++m;
				++f;
			}
			else if(strcmp(str,"FF")==0) f+=2;
			else if(strcmp(str,"MM")==0) m+=2;
			if('\n'==getchar()){
				if(f==0) cout<<"NO LOOP"<<endl;
				else if(f!=m) cout<<"NO LOOP"<<endl;
				else if((f==m)&&(m==1)) cout<<"NO LOOP"<<endl;
				else if(f==m) cout<<"LOOP"<<endl;
				break;
			}
		}	
	}
	return 0;
}

