#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>


using namespace std;

int strlen(string s)
{
    int len = 0;

    while (s[len])
        len++;

    return len;
}


int main(void)
{
	//  freopen("uva.txt","rt",stdin);
     
	  string c;
	 
	  getline(cin,c);
	    int i;
	  
	  i=strlen(c);
	  
	 
	 cout<<c<<" "<<i;;	

	
	return 0;
}

