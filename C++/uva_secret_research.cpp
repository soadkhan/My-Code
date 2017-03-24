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
	//  freopen("uva.txt","rt",stdin);
	
	char str[900000];
	
	long long int test,le;
	
	cin>>test;
	
	if(test<=0)
	{
		cout<<endl;
		return 0;
	}
	
	
	for(long long int i=0;i<test;i++)
	{
		
		 cin>>str;
		 
		 le=strlen(str);
		  
		 if(0==strcmp(str,"1")||0==strcmp(str,"4")||0==strcmp(str,"78"))
		 {
		 	cout<<"+"<<endl;
		 	continue;
		 }
		 if('3'==str[le-2]&&'5'==str[le-1])
		 {
		 	cout<<"-"<<endl;
		 	continue;
		 }
		 if('9'==str[0]&&'4'==str[le-1])
		 {
		 	cout<<"*"<<endl;
		 	continue;
		 }
		 if(str[0]=='1'&&str[1]=='9'&&str[2]=='0')
		 {
		 	cout<<"?"<<endl;
		 	continue;
		 }
		 
		
	}


	
	return 0;
}

