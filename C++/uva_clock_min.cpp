#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>
using namespace std;
float absv(float a, float b){if(a>b) return(a-b);else return (b-a);}
int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	long long int con=0;
	float h,m;
	char c;
	while(4)
	{
		con++;
		cin>>h>>c>>m;
		if(h==0&&m==0){ 
			if(con==1) cout<<endl;
			return 0;
		}
		float ans=absv((h*30+m*0.5),m*6);
		if(ans>180) printf("%.3f\n",absv(360,ans));
		else printf("%.3f\n",ans);
	}
	return 0;
}

