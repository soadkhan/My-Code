#include<stdio.h>
main ()
{
	int n1,n2,ni;
	int i,j;
	int con=0;
	int ara1[100];
	int ara2[100];
	int inter[100];
	
	printf("how many number you have in the first set:");
	scanf("%d",&n1);
	printf("\ninput your numbers:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&ara1[i]);
	}
	printf("\nhow many numbers you have in the second set:");
	scanf("%d",&n2);
	printf("\ninput your  numbers:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&ara2[i]);
	}
	
	
	int max=0;
	int tri[100];
	
    for(i=0;i<n2;i++)
	{
		if(max<ara2[i])
		{
			max=ara2[i];
		}
		
	}	
	
	for(i=0;i<n2;i++)
	{
		tri[i]=ara2[i];
	}
	
	

	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			
			if(ara1[i]==tri[j])
			{
				  
				  inter[con]=ara1[i];
				  con++;
									  
				  if(tri[j]>=0)
				  { 
				  tri[j]=tri[j]+max+1;
			      }
			      if(tri[j]<0)
			      {
			      tri[j]=(tri[j]*-1)+max;
			      }
		          	      goto m;
			    
			    
			}
			
		}
		m:;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//for(i=0;i<n1;i++)
	//{
	  //  printf("\n%d",ara1[i]);
	//		
	//}
		for(i=0;i<con;i++)
	{
	    printf("\n%d",inter[i]);
			
	}
//	int fla=0;
//	for(i=0;i<n2;i++)
//	{
//		for(j=0;j<con;j++)
//		{
  //           if(ara2[i]==inter[j])
  //           {
  //           	fla=1;
   //          	
    //         }
//		}
//		if(fla==0)
//		{
//			printf("\n%d",ara2[i]);
//		}
//		fla=0;	
//	}
}
