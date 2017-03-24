#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>
using namespace std;
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b); else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
int main(void)
{
	// freopen("uva.txt","rt",stdin);
	long long int de,op,fu,con=0,a;
	long long int ara[10000][3];
	while(4)
	{
		long long int max_v=0,sum=0;
		con++;
		cin>>de>>op>>fu;
        if(de==0&&op==0&&fu==0){
        	if(con==1) cout<<endl;
        	return 0;
        }

        cout<<"Sequence "<<con<<endl;
        for(long long int i=0;i<de;i++){
        	cin>>ara[i][0];
        	ara[i][1]=-1;
        }
        for(long long int i=0;i<op;i++){
        	cin>>a;
        	sum+=(ara[a-1][0]*ara[a-1][1]*-1);
        	ara[a-1][1]*=-1;
        	max_v=max(max_v,sum);
        }
        if(max_v>fu) cout<<"Fuse was blown."<<endl;
        else cout<<"Fuse was not blown.\nMaximal power consumption was "<<max_v<<" amperes."<<endl;
        cout<<endl;
	}
	return 0;
}



