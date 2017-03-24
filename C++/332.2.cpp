#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//#include<math.h>
//#include<new>
#include<stdlib.h>


using namespace std;

int main(void)
{
	//  freopen("uva.txt","rt",stdin);
     
	 long int no[100000],	pa[100000];
	 long int n,m;
	 cin>>n>>m;
	 
	 for(long int i=0;i<n;i++)
	 {
	 	cin>>no[i];
	 }
	 
	 int posi=1;
	 int amp=0;
	 long int *out;
	 
	 //out=new long long int(100000);
	 
	 
	 out=(long int *)malloc(sizeof(long int)*100000 );
	 long int le=-1;
	 
	 
	 for(long int i=0;i<m;i++)
	 {
	 	cin>>pa[i];
	 	
	 	posi=1;
	 	
	 	amp=0;
	 	
	 	for(long int j=0;j<n;j++)
	 	{
	 		
	 		
	 		if(pa[i]==no[j])
	 		{
	 			amp++;
	 			
	 			if(amp==1)
	 			{
	 			
	 			    posi=0;	
	 			    le++;
	 		 	    out[le]=j+1;
	 		 	   
	 			}
	 		}
	 		
	 	}
	 	
	 	
	 			if(amp>1)
	 			{		
	 				cout<<"Ambiguity"<<endl;
	 				return 0;
	 			}
	 	
	 	if(posi==1)
	 	{
	 		cout<<"Impossible"<<endl;
	 		return 0;
	 	}
	 	
	 	
	 	
	 	
	 }
	 
	 
	 cout<<"Possible"<<endl;
	 
	 for(long int i=0;i<=le;i++)
	 {
	 	if(i!=le)
	 	{
	 		cout<<out[i]<<" ";
	 	}
	 	else
	 	{
	 		cout<<out[i]<<endl;
	 	}
	 }
	
	 
//	 free(out);
	 
	return 0;
}

