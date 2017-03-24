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
	//  freopen("uva.txt","rt",stdin);
	long long int ara[4];
	long long int con=0;
	while(4)
	{
		con++;
		cin>>ara[0]>>ara[1]>>ara[2];
		if(ara[0]==0&&ara[1]==0&&ara[2]==0){
			if(con==1) cout<<endl;
			return 0;
		}
		sort(ara,ara+3);
		if(ara[2]==sqrt(pw(ara[0],2)+pw(ara[1],2))) cout<<"right"<<endl;
		else cout<<"wrong"<<endl;
	}
	
	return 0;
}

