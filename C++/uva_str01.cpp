#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>
using namespace std;
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
int main(void)
{
	//freopen("uva.txt","rt",stdin);
    char *str;
	str = new char[1000010];
	long long int con=0; 
	while(1==scanf("%s",str))
	{
		con++;
		cout<<"Case "<<con<<":"<<endl;
		long long int n,a,b,mn,mx,k;
		char fl;
		cin>>n;
		while(n--){
			k=0;
			cin>>a>>b;
			mx=max(a,b);
			mn=min(a,b);
			fl=str[mn];
			for(long long int i=mn;i<=mx;i++){
				if(str[i]!=fl){
					k=1;
					cout<<"No"<<endl;
					break;
				}	
			}
			if(k!=1) cout<<"Yes"<<endl;
		}
	}	
	delete(str);
	return 0;
}

