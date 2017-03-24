#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;

long long int dif(long long int a,long long int b){if(a>b) return (a-b); else return (b-a);}

int main(void)
{
	 // freopen("uva.txt","rt",stdin);
    long long int ftest;
	cin>>ftest;
	if(ftest==0){
		cout<<endl;
		return 0;
	}
	while(ftest--)
	{
		long long int test,n,x1,x2,y1,y2;
		cin>>test>>n;
		while(test--){
			cin>>x1>>y1>>x2>>y2;
			if(n!=1){
				if(x1==x2&&y1==y2) cout<<0<<endl;
				else if((x1+y1)%2!=(x2+y2)%2) cout<<"no move"<<endl;
				else if(dif(x1,x2)==dif(y1,y2)) cout<<1<<endl;
				else cout<<2<<endl;
			}
			else cout<<0<<endl;
		}
	}
	return 0;
}

