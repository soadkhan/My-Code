#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
     int ara[1100];
     int lo[1100]={0};
     int n,con=0,max=0,a;
     int *ptr;
     cin>>n;
     a=n;
     for(int i=0;i<n;i++)
     {
     	cin>>ara[i];
     	lo[ara[i]]++;
     }
     for(int i=0;i<=1000;i++)
     {
     	if(lo[i]>max)
     	{
     		max=lo[i];
     	}
     }
     sort(ara,ara+n);
     ptr=ara;
     while(4)
     {
     	  if(ptr==(ara+n-1))
     	  {
  //   	  	  if(con>max)
 //    	  	   {
   //  	  	   	cout<<con<<endl;
   //  	  	   	    max=con;
   //  	  	   	    con=0;
   //  	  	   }
     	  	  cout<<max<<" "<<a<<endl;
     	  	  return 0;
     	  }
     	  if(*ptr==*(ptr+1))
     	  {
     	  	   a--;
 //    	  	   con++;
     	  	   *ptr++;
     	  	   continue;
     	  }
     	  if(*ptr!=*(ptr+1))
     	  {
  //   	  	   if(con>max)
  //   	  	   {
    // 	  	   	    cout<<con<<endl;
   ////  	  	   	    max=con;
  //   	  	   	    con=0;
  //   	  	   }
     	  	   *ptr++;
     	  	   continue;
     	  }
     }
	return 0;
}
