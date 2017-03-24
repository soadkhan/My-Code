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
//	freopen("uva.txt","rt",stdin);
    long long int x1,x2,y1,y2,con=0;
	while(4)
	{
		con++;
		cin>>x1>>y1>>x2>>y2;
		if(x1==0&&x2==0&&y1==0&&y2==0){
			if(con==1) cout<<endl;
			return 0;
		}
		if(x1==x2&&y1==y2) cout<<0<<endl;
		else if(dif(x1,x2)==dif(y1,y2)&&dif(x1,x2)!=0) cout<<1<<endl;
		else if(dif(x1,x2)==0||dif(y1,y2)==0) cout<<1<<endl;
		else cout<<2<<endl;
	}
	return 0;
}

