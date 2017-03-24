#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	long int test,con=0;
	cin>>test;
	if(test<=0){
		cout<<endl;
		return 0;
	}
	getchar();
	while(test--){
		con++;
		string str;
		cin>>str;
		printf("Case %ld: ",con);
		stringstream ss(str);
		char a;
		long int i;
		while(ss>>a>>i){
			while(i--) cout<<a;
		}
		cout<<endl;
	}
	return 0;
}

