#include<iostream>
using namespace std;

int main(void)
{
	unsigned long int n,a,n2;
	unsigned long int ara[110000][4];
	cin>>n;
	cin>>a;
	ara[0][0]=1;
	ara[0][1]=a;
	for(unsigned long int i=1;i<n;i++)
	{
		 ara[i][0]=ara[i-1][1]+1;
		 cin>>a;
		 ara[i][1]=ara[i][0]+a-1;	 
	}
	cin>>n2;
	for(unsigned long int i=0;i<n2;i++)
    {
    	cin>>a;
        unsigned long int mid_in,low_in=0,high_in=n-1;
        while(low_in<=high_in)
        {
     	   mid_in = ( high_in+low_in )/2;
    	   if(a<=ara[mid_in][1]&&a>=ara[mid_in][0])
		   {
		 	    cout<<mid_in+1<<endl;
		    	break;
		   } 
		   if(a<ara[mid_in][0])
		   {
		    	high_in=mid_in-1;
		   }
		   if(a>ara[mid_in][1])
		   {
		    	low_in=mid_in+1;
		   }
        }
    }
	return 0;
}
