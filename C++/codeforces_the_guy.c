#include<stdio.h>
int main(void)
{
	int n,p,q,i,k,j,con=0;
	int ara[110];
	i=0;
	scanf("%d",&n);
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		scanf("%d",&ara[i]);// i is the length of the array...........
	}
	scanf("%d",&q);        //  n is the number of levels.............
	for(i=i;i<p+q;i++)
	{
		scanf("%d",&ara[i]);
	}
	for(j=1;j<=n;j++)
	{
		for(k=0;k<i;k++)
		{
			if(j==ara[k])
			{
				con++;
				break;
			}
		}
	}
	if(con==n) printf("I become the guy.\n");
	else printf("Oh, my keyboard!\n");
	return 0;
}
