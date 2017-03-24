#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>


using namespace std;


int main(void)
{
	  freopen("uva.txt","rt",stdin);
	long long int ara[5][8];
	while(9==scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&ara[1][1],&ara[1][3],&ara[1][2],&ara[2][1],&ara[2][3],&ara[2][2],&ara[3][1],&ara[3][3],&ara[3][2]))
	{
       
      // printf("%lld %lld %lld \n%lld %lld %lld \n%lld %lld %lld\n",ara[1][1],ara[1][2],ara[1][3],ara[2][1],ara[2][2],ara[2][3],ara[3][1],ara[3][2],ara[3][3]);
		
		long long int a=ara[2][1]+ara[3][1],b=ara[2][2]+ara[3][2],c=ara[2][3]+ara[3][3],sum,mark;
		
		cout<<a<<" "<<b<<" "<<c<<endl;
	
	    if(a<=b&&a<=c) 
		{
//			cout<<"B";
			sum=a;
			mark=1;
		}
		else if(b<c) 
		{
	//		cout<<"C";
			sum=b;
			mark=2;
		}
		else if(c<b) 
		{
	//		cout<<"G";
			sum=c;
			mark=3;
		}
		
		long long int a2=ara[1][1]+ara[3][1],b2=ara[1][2]+ara[3][2],c2=ara[1][3]+ara[3][3],mark2;
		
		if(mark==1)
		{
			if(b2<=c2)
			{
	//			cout<<"C";
				sum+=b2;
				mark2=2;
			}
			else
			{
	//			cout<<"G";
				sum+=c2;
				mark2=3;
			}
		}
		
		if(mark==2)
		{
			if(a2<=c2)
			{
	//			cout<<"B";
				sum+=a2;
				mark2=1;
			}
			else
			{
	//			cout<<"G";
				sum+=c2;
				mark2=3;
			}
		}
			
		if(mark==3)
		{
			if(a2<=b2)
			{
	//			cout<<"B";
				sum+=a2;
				mark2=1;
			}
			else
			{
	//			cout<<"C";
				sum+=b2;
				mark2=2;
			}
		}
		
			cout<<a2<<" "<<b2<<" "<<c2<<endl;
		long long int a3=ara[1][1]+ara[2][1],b3=ara[1][2]+ara[2][2],c3=ara[1][3]+ara[2][3];
		
		if((6-(mark+mark2))==1)
		{
	//		cout<<"B";
			sum+=a3;
		}
		 
		if((6-(mark+mark2))==2)
		{
//			cout<<"C";
			sum+=b3;
		}
		
		if((6-(mark+mark2))==3)
		{
	//		cout<<"G";
			sum+=c3;
		}	
		  	cout<<a3<<" "<<b3<<" "<<c3<<endl;
		
		cout<<" "<<sum<<endl;	
	}
	
	return 0;
}

