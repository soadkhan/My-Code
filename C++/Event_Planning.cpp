#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>


using namespace std;


int main(void)
{
	  freopen("uva.txt","rt",stdin);
	
	long int per,bu,ht,we,cost;
    while(4==scanf("%ld %ld %ld %ld",&per,&bu,&ht,&we))
    {
    		long int pr,a,co=bu+1;
    		cin>>pr;
    		for(long int i=0;i<we;i++)
    		{
    			cin>>a;
    			if(a>=per)
    			{
    				co=pr*per;
  //  				break;
    			}
    		}
    		for(long long int i=1;i<ht;i++)
    		{
    			long int s;
    			cin>>pr;
    			for(long int j=0;j<we;j++)
    			{
    				
    				cin>>a;
    				if(a>=per)
    				{
    					s=pr*per;
//    					break;
    				}
    			
    			}
    			if(s<co)
    			{
    				co=s;
    			}
    			
    		}
    		if(co<=bu) cout<<co<<endl;
    		
    		else cout<<"stay home"<<endl;
	
    }
	
	
	
	
	return 0;
}

