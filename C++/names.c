#include<stdio.h>
#include<string.h>
#define O 177;
main () {
    int i=0,k,j=0;
    char go[7][100]= {"     ","     ","     ","     ","     ","     ","     "};
    char an[7][100]= {"  0   ","  0   "," 0 0  "," 0 0  "," 000  ","0   0 ","0   0 "};
    char bn[7][100]= {"000  ","0  0 ","0  0 ","000  ","0  0 ","0  0 ","000  "};
    char cn[7][100]= {" 00  ","0  0 ","0    ","0    ","0    ","0  0 "," 00  "};
    char dn[7][100]= {"00   ","0 0  ","0  0 ","0  0 ","0  0 ","0 0  ","00   "};
    char en[7][100]= {"0000 ","0    ","0    ","0000 ","0    ","0    ","0000 "};
    char fn[7][100]= {"0000 ","0    ","0    ","0000 ","0    ","0    ","0    "};
    char gn[7][100]= {" 000  ","0   0 ","0     ","0     ","0 000 ","0 0 0 "," 00 0 "};
    char hn[7][100]= {"0  0 ","0  0 ","0  0 ","0000 ","0  0 ","0  0 ","0  0 "};
    char in[7][100]= {" 000 ","  0  ","  0  ","  0  ","  0  ","  0  "," 000 "};
    char jn[7][100]= {"0000 ","   0 ","   0 ","   0 ","0  0 ","0  0 "," 00  "};
    char kn[7][100]= {"0   0 ","0  0  ","0 0   ","00    ","0 0   ","0  0  ","0   0 "};
    char ln[7][100]= {"0    ","0    ","0    ","0    ","0    ","0  0 ","0000 "};
    char mn[7][100]= {"0   0 ","00 00 ","0 0 0 ","0   0 ","0   0 ","0   0 ","0   0 "};
    char nn[7][100]= {"0   0 ","00  0 ","0 0 0 ","0 0 0 ","0  00 ","0  00 ","0   0 "};
    char on[7][100]= {" 00  ","0  0 ","0  0 ","0  0 ","0  0 ","0  0 "," 00  "};
    char pn[7][100]= {"000   ","0  0  ","0  0  ","000   ","0     ","0     ","0     "};
    char qn[7][100]= {" 000    ","0   0   ","0   0   ","0 0 0   ","0  00 0 ","0   0 0 "," 000 0  "};
    char rn[7][100]= {"000   ","0  0  ","0  0  ","000   ","0 0   ","0  0  ","0   0 "};
    char sn[7][100]= {" 0000 ","0     ","0     "," 000  ","    0 ","    0 ","0000  "};
    char tn[7][100]= {"00000 ","0 0 0 ","  0   ","  0   ","  0   ","  0   ","  0   "};
    char un[7][100]= {"0  0 ","0  0 ","0  0 ","0  0 ","0  0 ","0  0 "," 00  "};
    char vn[7][100]= {"0     0 ","0     0 ","0     0 ","0     0 "," 0   0  ","  0 0   ","   0    "};
    char wn[7][100]= {"0       0 ","0       0 ","0   0   0 ","0   0   0 "," 0 0 0 0  ","  0   0   ","  0   0   "};
    char xn[7][100]= {"0   0 ","0   0 "," 0 0  ","  0   "," 0 0  ","0   0 ","0   0 "};
    char yn[7][100]= {"0     0 "," 0   0  ","  0 0   ","   0    ","   0    ","   0    ","   0    "};
    char zn[7][100]= {"00000 ","0  0  ","  0   "," 0    ","0     ","0   0 ","00000 "};
    char spn[7][100]= {"    ","    ","    ","    ","    ","    ","    "};
    char wor[150];
    printf("input your sentence:\n");
    gets(wor);
    for(i=0; i<strlen(wor); i++) {
        if(wor[i]==' ') {
            j++;
        }
    }
    while(4) {

        for(i=0; i<strlen(wor); i++) {
h:
            ;
            if(wor[i]==' ') goto n;
            if(wor[i]=='a'||wor[i]=='A') {
                for(k=0; k<7; k++) {
                    strcat(go[k],an[k]);
                }
            }
            if(wor[i]=='b'||wor[i]=='B') {
                for(k=0; k<7; k++) {
                    strcat(go[k],bn[k]);
                }
            }
            if(wor[i]=='c'||wor[i]=='C') {
                for(k=0; k<7; k++) {
                    strcat(go[k],cn[k]);
                }
            }
            if(wor[i]=='d'||wor[i]=='D') {
                for(k=0; k<7; k++) {
                    strcat(go[k],dn[k]);
                }
            }
            if(wor[i]=='e'||wor[i]=='E') {
                for(k=0; k<7; k++) {
                    strcat(go[k],en[k]);
                }
            }
            if(wor[i]=='f'||wor[i]=='F') {
                for(k=0; k<7; k++) {
                    strcat(go[k],fn[k]);
                }
            }
            if(wor[i]=='g'||wor[i]=='G') {
                for(k=0; k<7; k++) {
                    strcat(go[k],gn[k]);
                }
            }
            if(wor[i]=='h'||wor[i]=='H') {
                for(k=0; k<7; k++) {
                    strcat(go[k],hn[k]);
                }
            }
            if(wor[i]=='i'||wor[i]=='I') {
                for(k=0; k<7; k++) {
                    strcat(go[k],in[k]);
                }
            }
            if(wor[i]=='j'||wor[i]=='J') {
                for(k=0; k<7; k++) {
                    strcat(go[k],jn[k]);
                }
            }
            if(wor[i]=='k'||wor[i]=='K') {
                for(k=0; k<7; k++) {
                    strcat(go[k],kn[k]);
                }
            }
            if(wor[i]=='l'||wor[i]=='L') {
                for(k=0; k<7; k++) {
                    strcat(go[k],ln[k]);
                }
            }
            if(wor[i]=='o'||wor[i]=='O') {
                for(k=0; k<7; k++) {
                    strcat(go[k],on[k]);
                }
            }
            if(wor[i]=='p'||wor[i]=='P') {
                for(k=0; k<7; k++) {
                    strcat(go[k],pn[k]);
                }
            }
            if(wor[i]=='q'||wor[i]=='Q') {
                for(k=0; k<7; k++) {
                    strcat(go[k],qn[k]);
                }
            }
            if(wor[i]=='r'||wor[i]=='R') {
                for(k=0; k<7; k++) {
                    strcat(go[k],rn[k]);
                }
            }
            if(wor[i]=='s'||wor[i]=='S') {
                for(k=0; k<7; k++) {
                    strcat(go[k],sn[k]);
                }
            }
            if(wor[i]=='t'||wor[i]=='T') {
                for(k=0; k<7; k++) {
                    strcat(go[k],tn[k]);
                }
            }
            if(wor[i]=='u'||wor[i]=='U') {
                for(k=0; k<7; k++) {
                    strcat(go[k],un[k]);
                }
            }
            if(wor[i]=='v'||wor[i]=='V') {
                for(k=0; k<7; k++) {
                    strcat(go[k],vn[k]);
                }
            }
            if(wor[i]=='w'||wor[i]=='W') {
                for(k=0; k<7; k++) {
                    strcat(go[k],wn[k]);
                }
            }
            if(wor[i]=='x'||wor[i]=='X') {
                for(k=0; k<7; k++) {
                    strcat(go[k],xn[k]);
                }
            }
            if(wor[i]=='y'||wor[i]=='Y') {
                for(k=0; k<7; k++) {
                    strcat(go[k],yn[k]);
                }
            }
            if(wor[i]=='z'||wor[i]=='Z') {
                for(k=0; k<7; k++) {
                    strcat(go[k],zn[k]);
                }
            }
            if(wor[i]=='m'||wor[i]=='M') {
                for(k=0; k<7; k++) {
                    strcat(go[k],mn[k]);
                }
            }
            if(wor[i]=='n'||wor[i]=='N') {
                for(k=0; k<7; k++) {
                    strcat(go[k],nn[k]);
                }
            }
        }
        if(j==0) {

            for(k=0; k<7; k++) {
                printf("\n%s",go[k]);
            }
            for(k=0; k<7; k++) {
                strcpy(go[k],spn[k]);
            }
            printf("\n\n\n");
            goto m;
        }
        if(j!=0) {
n:
            ;
            for(k=0; k<7; k++) {
                printf("\n%s",go[k]);
            }
            for(k=0; k<7; k++) {
                strcpy(go[k],spn[k]);
            }
            printf("\n\n\n");
            if(wor[i]=='\0') goto m;
            i++;
            goto h;

        }

    }
m:
    ;
}
