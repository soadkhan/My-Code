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
char str[10010];

long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
long long int abs_v(long long int a){if(a<0) return (a*-1);else return a;}
int res(void)
{
	long long int sum=0;
	long long int i=0;
	while(str[i]){
		if(i%2==0) sum+=(str[i]-48);
		else sum-=(str[i]-48);
		i++;
	}
	if( (abs_v(sum)%11)==0 ) return 1;
	else return 0;	
}

int main(void)
{
    //freopen("uva.txt","rt",stdin);
	long long int con=0;
	while(4)
	{
		con++;
		cin>>str;
		if(0==strcmp(str,"0")){
		     if(con==1) cout<<endl;
		     return 0;
		}
        if(1==res()) printf("%s is a multiple of 11.\n",str);
		else printf("%s is not a multiple of 11.\n",str);		
	}	
	return 0;
}

