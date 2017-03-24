#include<stdio.h>
int main(void)
{
    int conblack=0,conwhite=0;
    char str[10];
	int i,j;	
    for(i=0;i<8;i++)
	{
		scanf("%s",&str);
		for(j=0;j<8;j++)
		{
			if(str[j]=='q') conblack=conblack+9 ; 
			if(str[j]=='r') conblack=conblack+5 ; 
			if(str[j]=='b') conblack=conblack+3 ; 
			if(str[j]=='n') conblack=conblack+3 ; 
			if(str[j]=='p') conblack=conblack+1 ; 
			if(str[j]=='Q') conwhite=conwhite+9 ;
			if(str[j]=='R') conwhite=conwhite+5 ;
			if(str[j]=='B') conwhite=conwhite+3 ;
			if(str[j]=='N') conwhite=conwhite+3 ;
			if(str[j]=='P') conwhite=conwhite+1 ;
		}
	}	
	if(conblack==conwhite) printf("Draw\n");
	if(conblack>conwhite) printf("Black\n");
	if(conblack<conwhite) printf("White\n");
	return 0;
}
