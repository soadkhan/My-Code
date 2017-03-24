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
//    freopen("uva.txt","rt",stdin);
	char str[200000];
	while(cin.getline(str,200000)){
		if(cin.eof()) break;
        long int fi_w[45000];
        long int la_w[45000];
        long int l=strlen(str);
        long int con=0;
        for(long int i=0;i<l;i++){
        	if(str[0]!=' '){
        		fi_w=0;
        		con++;
        	}
			if(=' '){
				la_w=l-1;
				con++;
			}
			if(i!=0&&str[i]!=' '&&str[i-1]==' '){
				fi_w=i;
				con++;
			}
			
        	
        }
        
        for(long int i=0;i<con;i++)
           cout<<fi_w[i]<<" "<<la_w[i]<<endl; 
	}
	return 0;
}
