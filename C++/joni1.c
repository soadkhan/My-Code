 #include<stdio.h>
 void judge(int *p,int n);
 main ()
 {
 	int n,i,j,temp;
 	int ara[100];
 	printf("how many numbers you have?:");
 	scanf("%d",&n);
 	printf("\ninput your numbers:");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&ara[i]);
 	}
 	judge(ara,n);
 	   for(i=0;i<n;i++)
 	   {
 	   	  printf("\n%d",ara[i]);
 	   }
 }
 void judge(int *p,int n)
 {
 	int i,j;
 	int temp;
 	for(i=n-2;i>=0;i--)
 	   {
 	   	   for(j=0;j<=i;j++)
 	   	   {
 	   	   	   if(*(p+j)<*(p+j+1))
 	   	   	   {
 	   	   	   	   temp=*(p+j+1);
 	   	   	   	   *(p+j+1)=*(p+j);
 	   	   	   	   *(p+j)=temp;
 	   	   	   }
 	   	   }
 	   }
 }
