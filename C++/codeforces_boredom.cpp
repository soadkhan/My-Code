#include<iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	long long int n,mxvl=0,prin=0,max=0;
	long long int *ara;
	ara=(long long int *)std::malloc(100000*sizeof(long long int));
    cin>>n;
    for(long long int i=0;i<n;i++){
    	*(ara+i)=0;
    }
    for(long long int i=0;i<n;i++){
    	long long int a;
    	cin>>a;
    	if(mxvl<a) mxvl=a;
    	*(ara+a)=*(ara+a)+1;
    }
    while(4)
    {
    	long long int po;
    	max=0;
    	for(long long int j=0;j<=mxvl;j++)
    	{
    		if(max<*(ara+j)*j){
    			po=j;
    			max=*(ara+j)*j;
    		}
    	}
    	*(ara+po+1)=0;
    	*(ara+po-1)=0;
    	*(ara+po)=0;
    	if(max==0){
    		cout<<prin<<endl;
    		return 0; 
    	}
    	prin=prin+max;	
    }	
	return 0;
}
