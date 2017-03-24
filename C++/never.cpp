#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>

using namespace std;

double pw(double a,double b)
{
    double sum=1;
    for(double i=0;i<b;i++)
    {
        sum*=a;
    }
    return sum;
}


int main(void)
{
    freopen("uva.txt","rt",stdin);
    
    double x1,x2,r1,y1,y2,r2;
     
     cin>>x1>>y1>>r1>>x2>>y2>>r2;
      
     double d=sqrt(pw(x1-x2,2)+pw(y1-y1,2));
   //  cout<<"d "<<d<<endl;
     if(r1+r2<=d)
	 {
	     //  cout<<"k"<<endl;
		   cout<<"0.0000000000"<<endl;
 	 }
     else
     {
          double a=(1/d)*(  sqrt(  (-d+r1+r2) * (d-r1+r2) *(d+r1-r2) *(d+r1+r2)    )    );
           a/=2;
        cout<<"a "<<a<<endl;
       
          if(a==0)
          {
          	
          	if(r1<r2)    printf("%.10lf\n",3.1415926535*r1*r1);
          	else printf("%.10lf\n",3.1415926535*r2*r2);
          	 
          	return 0;
          	
          }
          
          double s1=(a+(2*r1))/2;
       //   cout<<"s1 "<<s1<<endl;
          
          double s2=(a+(2*r2))/2;
      ///    cout<<s2<<endl;
          
          double step1= ( pw(r1,2) )*( asin( a/(2*r1)) );
       //    cout<<step1<<endl ;       
          
          double step2= ( pw(r2,2) )*( asin( a/(2*r2)) ); 
       //   cout<<step2<<endl;
          
          double step3= sqrt(s1*(s1-a)*(s1-r1)*(s1-r1));
       //   cout<<step3<<endl;
          
          double step4= sqrt(s2*(s2-a)*(s2-r2)*(s2-r2));
      //    cout<<step4<<endl;
          
      //    cout<<step1+step2-step3-step4<<endl;
      // /   
          double ans=step1+step2-step3-step4;
          
          printf("%.10lf\n",ans);
          
         
          
     } 
     
     
     
     
     
     
    return 0;
}
