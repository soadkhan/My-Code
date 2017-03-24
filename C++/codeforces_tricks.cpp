#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>


using namespace std;




int main(void)
{
	 freopen("uva.txt","rt",stdin);
    long long  test,n,con=1;
	cin>>test;
	while(con<=test)
	{
		cin>>n;
		long long  s,d=1;
		s=n*(n+1)/2LL;
	    while(d<n)
	    {
	    		d*=2;
	    	//	cout<<d<<endl;
				s-=d*2;
	    }
	    if(s!=0) cout<<s-2<<endl;
	    else cout<<s<<endl; 
		con++;
	}
	
	

	
	return 0;
}

