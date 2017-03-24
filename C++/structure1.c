#include<stdio.h>
#include<string.h>
#include<malloc.h>




main () {
    struct profile {
        char name[100];
        int num;
    };
    int n,i;
    struct profile *student;
    scanf("%d",&n);
    student=malloc(n*sizeof(struct profile));
    scanf("%s",&student[0].name);
    scanf("%d",&student[0].num);
    for(i=1; i<n; i++) {
        scanf("%s",&student[i].name);
        scanf("%d",&student[i].num);
        if(student[i].num>student[0].num) {
            student[0]=student[i]	;
        }
    }
    printf("\n      %s    %d",student[0].name,student[0].num);
}
