#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>


using namespace std;


long long int pw(long long int a,long long int b)
{
	long long int sum=1;
	for(long long int i=0;i<b;i++)
	{
		sum*=a;
	}
	return sum;
}



int strlen(string s)
{
    int len = 0;

    while (s[len])
        len++;

    return len;
}

long long int max(long long int a,long long int  b)
{
	if(a>b ) return a;
	else return b;
}



int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	
	long long int test,a,sum=0;
	
	char str[10];
	
	cin>>test;
	
	while(test--)
	{
		cin>>str;
		
		if(strcmp(str,"donate")==0){
			cin>>a;
			sum+=a;
		}
		
		else cout<<sum<<endl;
	}

	
	return 0;
}

