#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>


using namespace std;



int main(void)
{
	//  freopen("uva.txt","rt",stdin);
    long long int h1,m1,h2,m2,con=0;
	
	while(4==scanf("%lld %lld %lld %lld",&h1,&m1,&h2,&m2))
	{
		con++;
		if(h1==0&&m1==0&&h2==0&&m2==0)
		{
			if(con==0) cout<<endl;
			return 0;
		}
		
		if(h1==0) h1=24;
		if(h2==0) h2=24;
		
		long long int t1,t2;
		t1=(h1*60)+m1;
		t2=(h2*60)+m2;
		if(t1>t2) cout<<(24*60)-abs(t1-t2)<<endl;
		else cout<<t2-t1<<endl;
		
	}	

	
	return 0;
}

