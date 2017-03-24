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
//int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	long int test;
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}	
	while(test--){
		char str1[30];
		char str2[30];
		cin>>str1>>str2;
		int l1=strlen(str1);
		int l2=strlen(str2);
		
		if(l1!=l2) cout<<"No"<<endl;
		else{
			int fl=0;
			for(int i=0;i<l1;i++){
				if(str1[i]!='u'&&str1[i]!='o'&&str1[i]!='i'&&str1[i]!='e'&&str1[i]!='a'){
					if(str2[i]!=str1[i]){
						fl=1;
						cout<<"No"<<endl;
						break;
					}
				}
			}
			if(fl==0) cout<<"Yes"<<endl;
		}
				
	}

	return 0;
}

