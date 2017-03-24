#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>


using namespace std;


int main(void)
{
//	  freopen("uva.txt","rt",stdin);
	
	long long int b1,c1,g1,b2,c2,g2,b3,c3,g3;
	while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
	{
		
		
		long int ara[8],min;
		int po;
		
		ara[1]=b2+b3+g1+g2+c1+c3;
		ara[2]=b2+b3+g1+g3+c1+c2;
		ara[3]=b1+b3+g1+g2+c2+c3;
		ara[4]=b1+b2+g1+g3+c2+c3;
		ara[5]=b1+b3+g2+g3+c1+c2;
		ara[6]=b1+b2+g2+g3+c1+c3;
		
		min=ara[1];
		po=1;
		
		for(int i=2;i<=6;i++)
		{
			if(ara[i]<min)
			{
			     min=ara[i];
				 po=i;	
			}
		}
		
		
		if(po==1) cout<<"BCG ";
		if(po==2) cout<<"BGC ";
		if(po==3) cout<<"CBG ";
		if(po==4) cout<<"CGB ";
		if(po==5) cout<<"GBC ";
		if(po==6) cout<<"GCB ";	
		
		cout<<ara[po]<<endl;
		
	}
	
	
	
	
	return 0;
}

