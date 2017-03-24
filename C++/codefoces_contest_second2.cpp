#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
     long int l,num;
	 
	 
	 char str[220000];
	 
	 char q,r;
	 
	 char che[144];
	 
	 for(int i=97;i<=122;i++)
	 {
	 	che[i]=i;
	 }	
	 
	 cin>>l>>num;
	 
	 getchar();
	 
	 gets(str);
	 
	 for(long int i=0;i<num;i++)
	 {
	 	
	 	  cin>>q>>r;
	 	  
	 	  for(int j=97;j<=122;j++)
	 	  {
	 	      int fl=0;	
	 	  	  char s;
	 	  	  if(che[j]==q)
	 	  	  {
	 	  	       fl=1;
				   s=r;
		      }
	 	  	  if(che[j]==r)
				 {
				   fl=1; 
				  s=q;
			     }
	 	  	  if(fl==1)
	 	  	  {
	 	  	  	   che[j]=s;
	 	  	  }
	 	  	  
	 	  }
	 	
	 }
	 
 
	 
	 for(long int i=0;i<l;i++)
	 {
	 	 str[i]=che[str[i]];
	 	
	 }

     cout<<str<<endl;
    
	return 0;
}
