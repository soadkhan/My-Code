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
    int test,a,b,c;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
    	cin>>a>>b>>c;
    	cout<<"Case "<<i<<": ";
    	if(a<=20&&b<=20&&c<=20)cout<<"good"<<endl;
		else cout<<"bad"<<endl;
    }

	return 0;
}

