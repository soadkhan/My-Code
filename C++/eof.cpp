#include<stdio.h>
#include<string.h>
int main(){
        FILE *go;
        go = fopen("uva.txt","a+");
        char str[1000];
        fgets(str,100,go);
       // fputs("\nnayeem",go);
        puts(str);
}

