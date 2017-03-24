#include<iostream>
using namespace std;
int main(void)
{
    long int n,time,a,sum=0;
    cin>>n>>time;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		sum+=a;
	}	
    a=time-(sum+((n-1)*10));
    if(a<0) cout<<-1<<endl;
    else cout<<(((n-1)*10)+a)/5<<endl;
	 
	return 0;
}
