#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>


using namespace std;


int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	
	double mo,pr,am,n,con=0;
	
	while(4==scanf("%lf %lf %lf %lf",&mo,&pr,&am,&n))
	{
		double ara[110][4];
		con++;
    //	if(con==3)	cout<<mo<<' '<<pr<<' '<<am<<' '<<n<<endl;
		
		if(mo<0)
		{
			if(con==1) cout<<endl;
			return 0;
		}
		
		for(long int  i=0;i<n;i++)
		{
			cin>>ara[i][0]>>ara[i][1];
			
		}
		
//		for(long int  i=0;i<n;i++)
//		{
	  //      if(con==3)		cout<<ara[i][0]<<' '<<ara[i][1]<<endl;
			
	//	}
		double owe = am;
		double car = am;
		
		if(ara[0][0]==0)
		{
			car = am - (am*ara[0][1]);
		}
		
		for(long int  i=0;i<mo;i++)
		{
			owe-=pr;
			double rt;
			
			for(long int  j=n-1;j>=0;j--)
			{
				if(i+1>=ara[j][0])
				{
					 rt = ara[j][1];
					 break;
				}
			}
			
			car-=(car*rt);
		//	if(con==3) cout<<owe << " "<<car<<endl;
			
			if(car>owe)
			{
	 		cout<<i<<" ";
				if(i==1) cout<<"month"<<endl;
				if(i>1) cout<<"months"<<endl;
				break;
			}
			
		}
		
			
	}
	
	return 0;
}

