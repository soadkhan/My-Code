#include<stdio.h>
main ()
{
	float s,n;
	int a,i,g;
	s=0;
	while(1)
   {
   		printf("1 calculate average...\n2 exit...\n");
		scanf("%d",&a);
		if(a==2) goto m;
		printf("\nhow many numbers you have?:\n");
		scanf("%d",&g);
		printf("input your numbers:\n");
		for(i=0;i<g;i++)
		{
			scanf("%f",&n);
			s=s+n;
		}
		printf("\nyour average is %.3f\n\n",s/g);
		s=0;
   }
	m:printf("\n\n\n\n\n\n\n_____________");
	printf("\nprocess ends\n");
	printf("_____________\n");
}
