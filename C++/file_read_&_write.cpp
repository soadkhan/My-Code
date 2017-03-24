#include<stdio.h>
main ()
{
	FILE *go;
	FILE *wr;
	go=fopen("uva.txt","r");
	char file[100];
	int a,b,c;
	fscanf(go,"%d %d %d",&a,&b,&c);
	fclose(go);
	printf("%d %d %d",a,b,c);
	wr=fopen("uva.txt","w");
	fprintf(wr,"\nkhan");
}
