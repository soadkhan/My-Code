#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
	 long long int i,n,sum=0;
	 long long int *ara;
	ara=(long long int *)std::malloc(3000000*sizeof( int));
	cin>>n;
	for(i=0;i<n;i++){
		cin>>*(ara+i);
	}
	sort(ara,ara+n);
	for(i=0;i<n-1;i++)
    {
    	sum=sum+*(ara+i) * (i+2) ;
    }
    sum=sum+ *(ara+n-1) * n;
	cout<<sum<<endl;
	
	return 0;
}
