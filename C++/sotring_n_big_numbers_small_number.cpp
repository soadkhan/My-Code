#include<stdio.h>
main () {
    int n1,n2;
    int ara[100];
    int i,j;
    int fl;
    int temp;
    int com;
    while(4) {
        printf("press 1 to calculate your great numbers\npress 2 to calculate your small numbers\npress 3 to exit........\n");
        scanf("%d",&fl);
        if(fl==3) goto m;
        if(fl==1) {
            printf("how many numbers you have?;\n");
            scanf("%d",&n1);
            printf("input your numbers:\n");
            for(i=0; i<n1; i++) {
                scanf("%d",&ara[i]);
            }
            for(i=n1-1; i>=0; i--) {
                for(j=0; j<i; j++) {
                    if(ara[j]<ara[j+1]) {
                        temp=ara[j+1];
                        ara[j+1]=ara[j];
                        ara[j]=temp;
                    }
                }
            }
            printf("how many great number you want?\n");
            scanf("%d",&n2);
            printf("the %d great numbers are......\n",n2);
            for(i=0; i<n2; i++) {
                printf("%d\n",ara[i]);
            }
        }
        if(fl==2) {
            printf("how many numbers you have?;\n");
            scanf("%d",&n1);
            printf("input your numbers:\n");
            for(i=0; i<n1; i++) {
                scanf("%d",&ara[i]);
            }
            for(i=n1-1; i>=0; i--) {
                for(j=0; j<i; j++) {
                    if(ara[j]>ara[j+1]) {
                        temp=ara[j+1];
                        ara[j+1]=ara[j];
                        ara[j]=temp;
                    }
                }
            }
            printf("how many small number you want?\n");
            scanf("%d",&n2);
            printf("the %d small numbers are......\n",n2);
            for(i=0; i<n2; i++) {
                printf("%d\n",ara[i]);
            }
        }
    }
m:
    printf("\n\n\n\n\n\n\nprocess ends\n\n\n\n\n\n\n");
}
