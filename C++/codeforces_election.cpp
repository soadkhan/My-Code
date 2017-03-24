#include<iostream>
using namespace std;
int main(void)
{
	int candi,city,lo;
	int ara[110]={0};
	long long int max=0,a;
	cin>>candi>>city;
	for(int i=0;i<city;i++)
	{
		max=0;
		lo=0;
		for(int j=0;j<candi;j++)
		{
			cin>>a;
			if(a>max)
			{
				max=a;
				lo=j;
			}
		}
		ara[lo]++;
	}
    max=0;
    lo=0;
    for(int i=0;i<candi;i++)
    {
    	if(ara[i]>max)
    	{
    		max=ara[i];
    		lo=i;
    	}
    }
	cout<<lo+1<<endl;
	return 0;
}
