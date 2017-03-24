#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
 
using namespace std;
 
int main()
{
	int i, n, check = 0;
	char st[256];
 
	while(cin.getline(st, 256))
	{
		if(cin.eof())
		break;
 
		/*gets(st);
  		/*cin.getline(st, 80)*/
		int len = strlen(st);
		/*st[len] = '\0';*/
		for(i = 0; i < len; i++)
		{
			if(st[i] != 34)
			printf("%c", st[i]);
			else
			{
				if(check == 1)
				printf("%c%c", 39, 39, check = 0);
				else
				printf("%c%c", 96, 96, check = 1);
/*if(i != 0) i++;*/
			}
		}
		cout << endl;
		for(i = 0; i <= len; i++)
				st[i] = '\0';
		}
 
return 0;
}
