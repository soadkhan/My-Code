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
	freopen("uva.txt","rt",stdin);
	map<string , int>li;
	map<string , int>::iterator it;
	long long int test,con=0;
	while(cin>>test){
		priority_queue< string > q;
		con++;
		if(test==0){
			if(con==1) cout<<endl;
			return 0;
		}
		string a;
		while(test--){
			cin>>a;
			 q.push(a);
		}
		string a,b;
		a = q.top(); 
		q.pop(); 
		 while( !q.empty() ){
			b=q.top();
			if(a.size()>b.size()){
				cout<<b;
				b=a;
			}
			else{
				cout<<a;
			}
			q.pop();
    	}  
    	cout<<endl;
	}
	return 0;
}

