#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[110];
	char str2[110];
	char strpile[110];
	int l1,l2,l3,i,j;
	gets(str1);
	gets(str2);
	gets(strpile);
	l1=strlen(str1);
	l2=strlen(str2);
	l3=strlen(strpile);
	if((l1+l2)!=l3)
	{
		printf("NO\n");
		return 0;
	}
	else
	{
		 for(i=0;i<l1;i++)
		 {
		 	for(j=0;j<l3;j++)
		 	{
		 		if(str1[i]==strpile[j])
		 		{
		 			strpile[j]='a';
		 			break;
		 		}
		 	}
		 }
		 for(i=0;i<l2;i++)
		 {
		 	for(j=0;j<l3;j++)
		 	{
		 		if(str2[i]==strpile[j])
		 		{
		 			strpile[j]='a';
		 			break;
		 		}
		 	}
		 } 
		 //puts(strpile);
		for(i=0;i<l3;i++)
		{
			if(strpile[i]!='a')
			{
				printf("NO\n");
				return 0;
			}
		}
		printf("YES\n");
		return 0;
	}
}
