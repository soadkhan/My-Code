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
	long long int a,b,c,x,y,z;
	long long int ara[5];
	cin>>a>>b>>c>>x>>y>>z;
	ara[0]=a-x;
	ara[1]=b-y;
	ara[2]=c-z;
	sort(ara,ara+3);
	int fl=0;
	if(ara[2]<0) {
		cout<<"No"<<endl;
		return 0;
	}
	
	if(ara[0]>=0){
		cout<<"Yes"<<endl;
		return 0;
	}
	
    if(ara[0]<0&&ara[1]>=0){
    	if ( ((ara[1]/2) + (ara[2]/2)) >=(ara[0]*-1)) cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
    	return 0;
    }
    
	if(ara[0]<0&&ara[1]<0){
		if( (ara[2]/2) >=( (ara[0]+ara[1])*-1) ) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		return 0;
	}
	
	return 0;
}

