#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>


using namespace std;

//

long double pw(long double a,long double b)
{
	long double sum=1;
	for(long double i=0;i<b;i++)
	{
		sum*=a;
	}
	return sum;
}




int main(void)
{
    freopen("uva.txt","rt",stdin);
	
	long double x1,x2,r1,y1,y2,r2;
	 
	 cin>>x1>>y1>>r1>>x2>>y2>>r2;
	  
	 long double d=sqrt(pw(x1-x2,2)+pw(y1-y1,2));

	 if(r1+r2<=d)
	 {
	  	cout<<"0.0000000000"<<endl;
	  	cout<<"k"<<endl;
	 }
	 else
	 {
	 	  long double a=(1/d)*(  sqrt(  (-d+r1+r2) * (d-r1+r2) *(d+r1-r2) *(d+r1+r2)    )    );
	 	 // cout<<a<<endl;
	 	  
	 	  long double s1=(a+(2*r1))/2;
	 	 // cout<<s1<<endl;
	 	  
	 	  long double s2=(a+(2*r2))/2;
	 //	  cout<<s2<<endl;
	 	  
	 	  long double step1= ( pw(r1,2) )*( asin( a/(2*r1)) );
		//   cout<<step1<<endl ;       
	 	  
	 	  long double step2= ( pw(r2,2) )*( asin( a/(2*r2)) ); 
	 	//  cout<<step2<<endl;
	 	  
	 	  long double step3= sqrt(s1*(s1-a)*(s1-r1)*(s1-r1));
	 //	  cout<<step3<<endl;
	 	  
	 	  long double step4= sqrt(s2*(s2-a)*(s2-r2)*(s2-r2));
	 //	  cout<<step4<<endl;
	 	  
	 //	  cout<<step1+step2-step3-step4<<endl;
	 	  
	 	  long double ans=step1+step2-step3-step4;
	 	  
	 	  printf("%.10Lf\n",ans);
	 	  
	 	 
	 	  
	 } 
	 
	 
	 
	 
	 
	 
	return 0;
}

