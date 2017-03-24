#include<iostream>
//#include<cstring>
//#include<cstdlib>
using namespace std;
int main(void)
{
	long long int l;
	char *ptr;
	string str; 
	//str=(char*)std::malloc(200000*sizeof(char));
//	ptr=str;
	cin>>l;
	getchar();
//	gets(str);
   cin>>str;
 //  ptr=str;
	while(4)
	{
		if(*ptr=='\0')
		{
			cout<<l<<endl;
			return 0;
		}
		if(*ptr=='1'&&*(ptr+1)=='0')
		{
			l+=-2;
			ptr=ptr+2;
			continue;
		}
		if(*ptr=='0'&&*(ptr+1)=='1')
		{
			l+=-2;
			ptr=ptr+2;
			continue;
		}
		ptr+=1;
	}
	
	
	
	
	return 0;
}
