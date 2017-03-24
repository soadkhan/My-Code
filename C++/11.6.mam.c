 #include<stdio.h>
main ()
{
	int lo;
	int n;
	int ara[100];
	int right_rep=1;
	int flagr=0;
	int flagl=0;
	int left_rep=1;
	int i,j;
	printf("how many rooms:");
	scanf("%d",&n);
	printf("\ninput numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ara[i]);
	}
	printf("\nyour room:");
	scanf("%d",&lo);
	for(i=lo;i<n;i++)
	{
		if(ara[lo-1]<ara[i])
		{
			 flagr=1;
			 break;
		}
		right_rep++;
	}
	for(j=lo-2;j>=0;j--)
	{
		if(ara[lo-1]<ara[j])
		{
			 flagl=1;
			 break;
		}
		left_rep++;
	}
	if(flagr==1&&flagl==1)
	{
		if(right_rep>left_rep)
		{
	        	   	printf("\nroom: %d number : %d ..left",j+1,ara[j]);	
		}
		if(right_rep<left_rep)
		{
			       printf("\nroom: %d number : %d ..right",i+1,ara[i]);   	         
		}
		if(right_rep==left_rep)
		{
			if(ara[i]>ara[j])
			{
                 	printf("\nroom: %d number : %d ...right",i+1,ara[i]);    				
			}
			if(ara[i]<ara[j])
			{
					printf("\nroom: %d number : %d ...left",j+1,ara[j]);	  
			}	
		}	
	}
	if(flagr==0&&flagl==0)
	{
		printf("\nyour number is the greatest....");
	}
	else
	{
		if(flagr==1)
		{
			printf("\nroom: %d number : %d. ..right",i+1,ara[i]);
		}
		if(flagl==1)
		{
			printf("\nroom: %d number : %d. ..left",j+1,ara[j]);
		}	
	}
}
