#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>

using namespace std;

bool is_tw(char str[])
{
	int con=0;
	if(str[0]!='t') con++;
	if(str[1]!='w') con++;
	if(str[2]!='o') con++;
	if(con<=1) return true;
	else return false;
	
}

bool is_on(char str[])
{
	int con=0;
	if(str[0]!='o') con++;
	if(str[1]!='n') con++;
	if(str[2]!='e') con++;
	if(con<=1) return true;
	else return false;
	
}

int main(void)
{
	//  freopen("uva.txt","rt",stdin);
    long int n;
	char str[6];
	cin>>n;
	if(n==0)
	{
		cout<<endl;
		return 0;
	}	
	while(n--)
	{
		cin>>str;
		if(strlen(str)==5)
		{
			cout<<3<<endl;
			continue;
		}
		
		if(is_on(str))
			cout<<1<<endl;
			
		if(is_tw(str))
			cout<<2<<endl;
	}

	return 0;
}

