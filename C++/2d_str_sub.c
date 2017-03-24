#include<stdio.h>
#include<string.h>

char mai[9][100]={"111      ",
                  "222      ",
	    		  "333      ",
				  "      *  ",
				  "     * * ",
				  "     * * ",
				  "      *  ",
				  "       * ",
				  "     **  "};
char sub[9][9];
int r,c;
int fl=0;
int dim;
int i,j;


int judge(void)
{
	int k,s;
	k=0;
	s=0;
	for(r=i;r<i+dim;r++)
	{
		fl=0;
		s=0;
		for(c=j;c<j+dim;c++)
		{
			if(mai[r][c]!=sub[k][s])
			{
				fl=1;
				break;
			}
			s++;
		}
		k++;
		if(fl==1)
		{
			break;
		}
		if(fl==0)
		{
			printf("\n%d %d\n",i,j);
			printf("\nyes......");
			return 0;
		}
	
	
	}

	return 0 ;
}


 int main ()
{

	printf("in your sub 2d string the  dimension must be like (m*m)........\ninpuit the length.......\n");
	scanf("%d",&dim);
	getchar();
	
	printf("\nnow input your sub string : \n");
	for(i=0;i<dim;i++)
	{
		gets(sub[i]);
	}

   for(i=0;i<=9-dim;i++)
   {
   	   for(j=0;j<=9-dim;j++)
   	   {
   	   	    judge();
   	   	    if(fl==0) 
   	   	    {
   	   	    	return 0;
   	   	    }
   	   	 
   	   }
   }
   if(fl==1)
   {
   	 printf("\nno......");
   	 return 0;
   }
   

	
	
	return 0;
}
