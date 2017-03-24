#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
	
	int n,ara[14],max;
	
	cin>>n;
	if(n==0){
		cout<<0<<endl;
		return 0;
	}
	for(int i=0;i<12;i++){
		cin>>ara[i];
	}
	
	sort(ara,ara+12);
	max=0;
	for(int i=11;i>=0;i--){
		max=max+ara[i];
		if(max>=n){
			cout<<12-i<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
