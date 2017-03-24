#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[110];
	int i,l,con=0;
	
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			con++;
		}
	}
	if(con>l/2) strupr(str);
	else strlwr(str);
	printf("%s\n",str);
	return 0;
}
