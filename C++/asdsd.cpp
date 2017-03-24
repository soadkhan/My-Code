#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	//freopen("uva.txt","rt",stdin);
	int n;
	cin>>n;
	int *p;
	
	p=(int *)calloc(n,sizeof(int));
	
	for(int i=0;i<n;i++)
		cin>>*(p+i);
	
	for(int i=0;i<n;i++)
		cout<<*(p+i)<<" ";
	 
	 free(p);	



	return 0;
}

