#include<stdio.h>
int main(void)
{
	int n,a,odd,even,exodd=0,exeve=0;
	int conodd=0,coneve=0,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			even=i+1;
			exeve=1;
			coneve++;
		}
		if(a%2==1)
		{
			odd=i+1;
			exodd=1;
			conodd++;
		}
		if(conodd>1&&exeve==1)
		{
			printf("%d\n",even);
			return 0;
		}
		if(coneve>1&&exodd==1)
		{
			printf("%d\n",odd);
			return 0;
		}
	}
	return 0;
}
