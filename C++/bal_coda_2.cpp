#include<bits/stdc++.h>
using namespace std ;

typedef long long int ll ;


void make (char *a , char *b , char *str){
    ll l = strlen(str) ;
    ll i = 0;
    for(i = 0 ; i<= l/2 ; i++)
        a[i] = str[i];
    a[i] = '\0' ;

    ll j = i ;
    for(j = i ; j<l ;j++)
        b[j] = str[j] ;
    b[j] = '\0' ;
}

bool fun(char *str1 , char *str2 ){

    if(strlen(str1)==1 || strlen(str2)==1) return false ;

    if(strcmp(str1 , str2) == 0) return true ;
    else {
        char a1[200200];
        char b1[200200] ;
        make(a1 , b1  , str1 ) ;
        char a2[200200] ;
        char b2[200200] ;
        make(a2 , b2 , str2) ;
        return( ( fun (a1 , b1) & fun(a2 , b2 )  ) | (fun(a1 , b2) & fun(a2 , b1)  ) ) ;
    }

}



int main(){
    char str1[200200];
    char str2[200200];

    scanf("%s%s", &str1 , &str2) ;
    cout<<fun(str1 , str2)<<endl;


    return 0 ;
}

