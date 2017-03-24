#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>


using namespace std;
char str[100];

char &fun(int &i)
{

	i--;
	return str[i];
}



int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	int j;
	cin>>str;
	cin>>j;
	//getchar();
	fun(j)='A';
	cout<<str<<endl;
	cout<<j;
	

	
	return 0;
}

