#include<iostream>
#include<cstring>
using namespace std;
int main(void)
{
	char str[101000];
	char che[10][3]={"|<",">|","><","<>","<(",")>",")(","()"};
	unsigned long long int i=0;
    while(4)
    {
    	i++;
    	gets(str);
    	if(str[0]=='0')
    	{
    		return 0;	
    	}
    	else
    	{
    	     long long int l=strlen(str);
			 if(str[0]=='1'&&str[l-1]=='2')
			 {
			 	long long int fl=0;
			 	for(long long int j=0;j<l-1;j++)
			 	{  
			 		   if(j>0&&str[j]=='1')
			 		   {
			 		   	  fl=1;
			 		   	  break;
			 		   }	   
			 		   if(j<l-1-1&&str[j]=='2')
			 		   {
			 		   	  fl=1;
			 		   	  break;
			 		   }
			 		   if((che[str[j]-48-1][1])==(che[str[j+1]-48-1][0]))
			 		   {
			 		   	    fl=0;
			 		   }
			 		   else
			 		   {
			 		   	    fl=1;
			 		   	    break;
			 		   }
			 	}
			 	if(fl==0)
			 	{
			 		cout<<i<<'.'<<" "<<"VALID"<<endl;
			 	}
			 	else
			 	{
			 		cout<<i<<'.'<<" "<<"NOT"<<endl;
			 	}	
			 }	 	
    		 else
    		 {
    		 	cout<<i<<'.'<<" "<<"NOT"<<endl;
    		 }
    	}	
    }
	return 0;
}
