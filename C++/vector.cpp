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
    vector< int > go;
    int i;
    for(int j=0;j<5;j++)
    {
    	cin>>i;
    	go.push_back(i);
    }
    for(int j=0;j<5;j++)
		cout<<go[j]<<endl;	

	
	return 0;
}

