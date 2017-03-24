#include<iostream>
using namespace std;

int main(void)
{
	unsigned long int arra[110000];
	unsigned long int al=1,bo=1,n;
	unsigned long int alp;
	unsigned long int bop;
	cin>>n;
	if(n==1)
	{
		cout<<1<<" "<<0<<endl;
		return 0;
	}
	for(unsigned long int i=0;i<n;i++)
	{
		cin>>arra[i];
	}
	alp=0;
	bop=n-1;
//	cout<<"initial alice "<<arra[alp]<<endl;
//	cout<<"initial bob "<<arra[bop]<<endl;
	
	while(4)
	{
		    
		    
		    if((alp+1)==bop)
		    {
		    	cout<<al<<" "<<bo<<endl;
		    	return 0;
		    }
		    
		    
		    if(((alp+2)==bop)&&arra[alp]==arra[bop])
		    {
		    	cout<<al+1<<" "<<bo<<endl;
		    	return 0;
		    }
		    
		    if(arra[alp]>arra[bop])
		    {
		    	arra[alp]=arra[alp]-arra[bop];
		    	bop=bop-1;
		    	bo++;
//		    	cout<<"BOP IS"<<bop<<endl;
//		    	cout<<"now alice "<<arra[alp]<<endl;
//		    	cout<<"now bob "<<arra[bop]<<endl;
                continue;		    	
		    }
		
		    if(arra[alp]<arra[bop])
		    {
		    	arra[bop]=arra[bop]-arra[alp];
		    	++alp;
		    	al++;
//		    	cout<<"BOP IS"<<bop<<endl;
//		    		cout<<"now alice "<<arra[alp]<<endl;
//		    	cout<<"now bob "<<arra[bop]<<endl;
		    	continue;
		    }
		    
		    if(arra[alp]==arra[bop])
		    {
		    	++alp;
		    	bop=bop-1;
		    	al++;
		    	bo++;
//		    	cout<<"BOP IS"<<bop<<endl;
//		    		cout<<"now alice "<<arra[alp]<<endl;
//		    	cout<<"now bob "<<arra[bop]<<endl;
		    	continue;
		    }
		
			
	}
		
	return 0;
}
