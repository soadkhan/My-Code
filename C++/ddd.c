
#include<stdio.h>
main ()
{
	float s,n;
	int a,i;
	s=0;
	a=2;
	while(a!=1)
	{
		printf("press any digit to calculate average...\n2 exit...");
		scanf("%d",&a);
		if(a==2) goto m;
		printf("\ninput three numbers:\n");
		for(i=0;i<3;i++)
		{
			scanf("%f",&n);
			s=s+n;
		}
		printf("\nyour average is %.2f\n\n",s/3);
		s=0;

	}
	m:;
}
