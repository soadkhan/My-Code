#include<stdio.h>
#include<string.h>
int main(void)
{
//30	qwertyuiopasdfghjkl;zxcvbnm,./
	char mai[34]={"qwertyuiopasdfghjkl;zxcvbnm,./"};
	char sub[110],d;
	int i,j,l,p;
	scanf("%c",&d);
	getchar();
    gets(sub);
    if(d=='R') p=-1;
    else p=1;
    l=strlen(sub);
    for(i=0;i<l;i++)
    {
    	for(j=0;j<30;j++)
    	{
    		if(sub[i]==mai[j])
    		{
    			printf("%c",mai[j+p]);
    			break;
    		}
    	}
    }
    printf("\n");
	return 0;
}
