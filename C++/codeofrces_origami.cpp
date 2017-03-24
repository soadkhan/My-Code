#include<iostream>
using namespace std;
int main(void)
{
	long long int a,b,con=0;
	cin>>a>>b;
	while(4)
	{
		cout<<1<<endl;
		if(a%b==0)
		{
			con=con+(a/b);
			cout<<con<<endl;
			return 0;
		}
		else
		{
			a=a-b;
			con++;
			if(a<b)
			{
				long long int temp;
				temp=b;
				b=a;
				a=temp;
			}
		}
	}
	return 0;
}
