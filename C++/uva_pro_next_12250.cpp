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
	// freopen("uva.txt","rt",stdin);
	
	char str[100];
	long int con=0;
	while(4)
	{
		con++;
		cin>>str;
		if(0==strcmp(str,"#")){
			if(con==1) cout<<endl;
			return 0;
		}
		else if(0==strcmp(str,"HELLO")) cout<<"Case "<<con<<": "<<"ENGLISH"<<endl;
		else if(0==strcmp(str,"HOLA")) cout<<"Case "<<con<<": "<<"SPANISH"<<endl;
		else if(0==strcmp(str,"HALLO")) cout<<"Case "<<con<<": "<<"GERMAN"<<endl;
		else if(0==strcmp(str,"BONJOUR")) cout<<"Case "<<con<<": "<<"FRENCH"<<endl;
		else if(0==strcmp(str,"CIAO")) cout<<"Case "<<con<<": "<<"ITALIAN"<<endl;
		else if(0==strcmp(str,"ZDRAVSTVUJTE")) cout<<"Case "<<con<<": "<<"RUSSIAN"<<endl;
		else cout<<"Case "<<con<<": "<<"UNKNOWN"<<endl;
	}	

	
	return 0;
}

