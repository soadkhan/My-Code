#include<stdio.h>
#include<math.h>
#include<string.h>
main ()
{
    //char num[100];
    int i,l,j,s,n,k=0,h;
     for(h=0;;h++)
     {
         char num[100];
          printf("\n1 run the programme\n2 exit.....\n");
          scanf("%d",&k);
          if(k==2) goto m;
          s=0;
          n=1;
          printf("input your number as a string:\n");
          scanf("%s",num);
          //gets(num);
          l=strlen(num);
          for(i=0;i<l;i++)
          {
    	        j=num[i]-48;
            	j=j*pow(10,l-n);
            	n++;
            	s=s+j;
          }
          printf("\nyour number is :%d\n",s);
          printf("\ninput another number to add:\n");
          scanf("%d",&i);
          printf("\nnow your number is %d ",s+i);
     }
     m:printf("\n\nprocess ends.........\n\n");
}
