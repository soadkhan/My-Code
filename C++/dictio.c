#include<stdio.h>
#include<string.h>
main()
{
     int i;
     int j;
     char wor[26][100]={"always,above,angry ","big,boss,boy ","can,catch,canon ","dangerous,do,dog ","easy,eat,everything ","fine,flower,flow ","good,god,go ","high,heaven,hug ","intelligent,ill,ink ","joker,joke,joy ","king,knight,kick ","long,low,lie ","monkey,money,most ","new,now,never ","over,on,ok ","power,pot,press ","queen,quick ","right,row,revenge ","speed,sparrow,speech ","toy,troy,tree ","unknown,under  ","victory,viking ","write,wrong ","xenon,xevier ","yes,youth ","zebra,zesus "};//
     char alp[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}; //
     char p;
     printf("input an alphabet:\n");
     scanf("%c",&p);
           for(j=0;j<26;j++)
           {
               if(p==wor[j][0]||p==alp[j])
               {
                   printf("%s",wor[j]);
               }
           }

}

