#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;

int main(void)
{
//  freopen("uva.txt","rt",stdin);
	
	long int con=0,n;
	while(4)
	{
		con++;
		cin>>n;
		long int re=0,mi=0,a;
		if(n==0){
			if(con==1) cout<<endl;
			return 0;
		}
		for(long int i=0;i<n;i++)
	    {
	    	cin>>a;
	    	if(a>0) re++;
	    	else mi++;
	    }
	    cout<<"Case "<<con<<": "<<re-mi<<endl;
	}
	return 0;
}

