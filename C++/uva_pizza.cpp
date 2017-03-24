#include<bits/stdc++.h>
using namespace std;
int main(void)
{
		//  freopen("uva.txt","rt",stdin);
		long long int a;
		while(cin>>a){
			if(a<0) break;
			long long int ans=(((a*(a+1))/2)+1);
			cout<<ans<<endl;
		}

	return 0;
}

