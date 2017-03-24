#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
//#include<math.h>
#include<string.h>


using namespace std;


int main(void)
{
//	 freopen("uva.txt","rt",stdin);
	long long int num,con=0;

	while(1==scanf("%lld",&num))
	{
	con++;
	 if(con>1) cout<<endl;
			long long int ara[200]={0};
	char nam[150][200];
	char n[200],gro[150][200];
	
		//scanf("%ld",&num);	
		
		long long int am,gn;
		
		getchar();
		
	
		
		for(long long int i=0;i<num;i++)
		{
			scanf("%s",&nam[i]);
		}
	
		for(long long int i=0;i<num;i++)
		{
	//		cout<<nam[i]<<endl;
		}
	
		
    	getchar();
    	
		for(long long int j=0;j<num;j++)
		{
		
			scanf("%s",&n);
			
	//		cout<<n;
		
		scanf("%lld %lld",&am,&gn);
		   
	//	   cout<<am<<' '<<gn<<endl;
		
		
	   		for(long long int i=0;i<gn;i++)
			{
				scanf("%s",&gro[i]);
			}
		    
		    for(long long int i=0;i<gn;i++)
			{
		//		scanf("%s",&gro[i]);
	//	       cout<<gro[i]<<endl;
			}
		
		    if( gn==0|| am==0 ) continue;
			for(long long int i=0;i<num;i++)
			{
				if(strcmp(n,nam[i])==0)
				{
					ara[i]+=-1*((am/gn)*gn);
	//				cout<<nam[i]<<" "<<ara[i]<<endl;
					break;
				}
			}
		
			for(long long int i=0;i<gn;i++)
			{
			
				for(long long int j=0;j<num;j++)
				{
					if(0==strcmp(gro[i],nam[j]))
					{
						ara[j]+=(am/gn);
		//				cout<<nam[j]<<" "<<ara[j]<<endl;
					//	break;
					}
				
				}
			
			}
			
			getchar();
		}
		
		for(long long int i=0;i<num;i++)
		{
			cout<<nam[i]<<" "<<ara[i]<<endl;
		}
		
//	cout<<endl;
		
	}
	
	
	
	
	return 0;
}

