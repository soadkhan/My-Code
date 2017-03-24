#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>


using namespace std;


int main(void)
{
//	  freopen("uva.txt","rt",stdin);
//		freopen("uva1.txt","wt",stdout);
	int fl=0;
	
//	string c;
	
     
	
	char c;
	
	while(1)
	{
	    c=getchar();
	
		if(fl==0&&c=='"')
		{
			cout<<'`'<<'`';
			fl=1;
			continue;
		}
		if(fl==1&&c=='"')
		{
			cout<<"''";
			fl=0;
			continue;
		}
	
		if(c==EOF)
		{
		//	cout<<endl;
			return 0;
		}
			cout<<c;
			
	}	
	return 0;
}

