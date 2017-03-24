#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<math.h>
#include<stdlib.h>
#include<new>


using namespace std;


int main(void)
{
//	  freopen("uva.txt","rt",stdin);
    
    char str[300];
    
    while(cin.getline(str,300))
    {
    	
    	if(cin.eof())
    		return 0;
    	int l=strlen(str);
    	
    	for(int i=0;i<l;i++)
    	{
    		printf("%c",str[i]-7);
    	}
    	cout<<endl;
    	
    }

	return 0;
}

