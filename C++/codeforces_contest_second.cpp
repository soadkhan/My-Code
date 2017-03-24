#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
	long int a,num,l;
	char str[220000];
	char che[220000][4];
	
	cin>>a>>num;
	getchar();
	gets(str);
	
	l=strlen(str);

    for(long int i=0;i<num;i++)
    {
    	cin>>che[i][0]>>che[i][1];
    }
	
	for(long int i=0;i<l;i++)
	{
		
		   for(long int j=0;j<num;j++)
		   {
		          
				  if(str[i]==che[j][0]) 
				   {
				    
					str[i]=che[j][1];	     
		             goto m;
		           }
		   
		          if(str[i]==che[j][1]) 
				  {
				  	str[i]=che[j][0];
				  	goto m;
				  	
				  	
				  }	    
		      	m:;
		
		   }
		
		
	}
	
	
	cout<<str<<endl;
	
	
	return 0;
}
