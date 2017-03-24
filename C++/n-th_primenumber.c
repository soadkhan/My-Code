#include<stdio.h>
main ()
{
	long int i,j;
	long int fl=1;
	long int con=1;
	long int n=10001;
 //   printf("%ld",n);
 scanf("%ld",&n);
	for(i=3;;i=i++)
	{
		if(i%2==0)
		{
			fl=0;
		}
		
		
		if(i%2==1)
		{
	
			for(j=3;j<=i/2;j=j+2)
			{
				if(i%j==0)
				{
					fl=0;
				}
			}
	    }
		
		if(fl==1)
		{
			con++;
			if(con==n)
			{
				printf("%ld",i);
				break;
			}
		}
		fl=1;
		i++;
	}

}
