#include<iostream>
using namespace std;
int main(void)
{
   long long int sum=0,n,a,b;
   cin>>n;
   cin>>a;
   sum=abs(a);
   for(long long int i=0;i<n-1;i++){
   		cin>>b;
   		sum+=abs(a-b);
   		a=b;
   }
   cout<<sum<<endl;
	return 0;
}

