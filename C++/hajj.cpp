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
  //freopen("uva.txt","rt",stdin);
	
	long long int i=0;
	char str[10];
	while(4)
	{
		i++;
		cin>>str;
		if(i==1&&strcmp(str,"*")==0)
		{
			cout<<endl;
			return 0;
		}
		if(strcmp(str,"Hajj")==0) cout<<"Case "<<i<<": "<<"Hajj-e-Akbar"<<endl;
		else if(strcmp(str,"Umrah")==0) cout<<"Case "<<i<<": "<<"Hajj-e-Asghar"<<endl;
		else return 0;
	}
	

	
	return 0;
}

