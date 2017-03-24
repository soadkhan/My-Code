#include<stdio.h>
int main(void){
        int array[1000];
        int n,a,i;
        printf("How many numbers you have in the array ??? ...... ");
        scanf("%d",&n);
        printf("\nPlease input the numbers :");
        for(i=1;i<=n;i++)
                scanf("%d", &array[i]);
        for(i=1;i<=(n/2);i++){
                array[i]=array[i]+array[n-i+1];
                array[n-i+1]=array[i]-array[n-i+1];
                array[i]=array[i]-array[n-i+1];
        }
        printf("\nIn reverse form..... ");
        for(i=1;i<=n;i++)
                printf("%d ",array[i]);
        return 0;
}
