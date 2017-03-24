#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,rev=0,temp,dig;
	cin>>n;
	temp=n;
	while(temp!=0){
		dig=temp%10;
		rev=rev*10+dig;
		temp/=10;
	}		
	cout<<rev;
	
	
	
	
	return 0;
}
