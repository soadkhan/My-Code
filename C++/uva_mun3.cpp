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
float abs_v(float a){
	if(a>=0) return a;
	else return 0; 
}
int main(void)
{
//	freopen("uva.txt","rt",stdin);
    float a,b,d;
	float test;
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}
	while(test--)
	{
		cin>>a>>b>>d;
		float ok1=abs_v(a-((a+b)/3));
		float ok2=abs_v(b-((a+b)/3));
	    printf("%g\n",(ok1/(ok1+ok2))*d);
	}	  
	return 0;
}

