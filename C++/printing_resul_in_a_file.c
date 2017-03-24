#include<stdio.h>
#include<string.h>
main ()
{

    FILE *object;
    object=fopen("result.txt","w");
    

	int i,j,n;
	int temp;
	char tp[100];
	double num[1000];
	char name[1000][1000];
	printf("how many students you have?:\n");
	scanf("%d",&n);


	printf("first input the name and then the number:\n");
	for(i=0;i<n;i++)
	{
		printf("\nname:");
		getchar();
		gets(name[i]);
		printf("\nnumber:");
		scanf("%lf",&num[i]);
	}


	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(num[j]<num[j+1])
			{
				temp=num[j+1];
				num[j+1]=num[j];
				num[j]=temp;
				strcpy(tp,name[j+1]);
				strcpy(name[j+1],name[j]);
				strcpy(name[j],tp);
			}
			
		}
		
	}


	
	printf("\n\nnew roll\t\tname\t\t   number\n");
	printf("____________________________________________________\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t       ",i+1);
		printf("%s\t\t",name[i]);
		printf("%.2lf\n",num[i]);
		printf("_____________________________________________________\n");
	}



   	fprintf(object,"\n\nnew roll\t\tname\t\t   number\n");
	fprintf(object,"____________________________________________________\n");
	for(i=0;i<n;i++)
	{
		fprintf(object,"%d\t\t       ",i+1);
		fprintf(object,"%s\t\t",name[i]);
		fprintf(object,"%.2lf\n",num[i]);
		fprintf(object,"_____________________________________________________\n");
	}

	
}
