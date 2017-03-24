#include<stdio.h>
#include<string.h>
struct profile{
	char name[100];
	int num;
	
};

main(){
    int i,j,n;	
	
	struct profile student[199],you;
	
	scanf("%d",&n);
	

	
	for(i=0;i<n;i++){
	    scanf("%s",&student[i].name);
		scanf("%d",&student[i].num);	
		
		
	}
	
	scanf("%s",&you.name);
	
	for(i=0;i<n;i++){
		
		j=strcmp(student[i].name,you.name);
		if(j==0){
			printf("%d",student[i].num);
			
		}
		
	}
	
}
