#include<iostream>
using namespace std;
int main(void)
{
	int team=0,con1=0,con2=0,con3=0;
	int ara1[5000];
	int ara2[5000];
	int ara3[5000];
	int n,i,a;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(a==1){
			ara1[con1]=i+1;
			con1++;
		}
		if(a==2){
			ara2[con2]=i+1;
			con2++;
		}
		if(a==3){
			ara3[con3]=i+1;
			con3++;
		}
	}
    team=con1;
	if(team>con2) team=con2;
	if(team>con3) team=con3;
	cout<<team<<endl;
	for(i=0;i<team;i++)
	{
		cout << ara1[i]<<" "<<ara2[i]<<" "<<ara3[i]<<endl;
	}
	
	
	return 0;
}
