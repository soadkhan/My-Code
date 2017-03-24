#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void)
{
	 int ara[10];
	 int i;
	 for(i=0;i<5;i++)
	 {
	 	cin>>ara[i];
	 }
	 sort(ara,ara+3);
	 for(i=0;i<5;i++)
	 {
	 	cout<<ara[i]<<endl;
	 }
	
	return 0;
}
