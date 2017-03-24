#include<iostream>
using namespace std;
int main(void)
{
	long long int a,b,con=0;
	cin>>a>>b;
	while(4)
	{
	//	cout<<1<<endl;
		if(a%b==0)
		{
			con=con+(a/b);
			cout<<con<<endl;
			return 0;
		}
		else
		{
			long long int temp;
			temp=(a/b);
			con=con+temp;
			long long int temp2;
			temp2=b;
			b=a-(b*temp);
			a=temp2;
		}
	}
	
	
	
	return 0;
}
