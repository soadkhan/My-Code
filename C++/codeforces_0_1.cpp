#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(void)
{
	long long int l,z=0,o=0;
	char *str;
	str=(char*)std::malloc(2000000*sizeof(char));
	cin>>l;
	getchar();
	gets(str);
	for(long long int i=0;i<l;i++)
	{
		if(str[i]=='0')
		{
			z++;
		}
		else
		{
			o++;
		}
	}
	
    if((o-z)>=0) cout<<o-z<<endl;
    else cout<<z-o<<endl;
	
	
	
	
	
	return 0;
}
