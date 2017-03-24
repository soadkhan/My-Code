#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
        int a=10000;
        int *p;
        p=(int *)malloc(a*sizeof(int));
        for(int i=0;i<10;i++)
                        cin>>p[i];
        for(int i=0;i<10;i++)
                        cout<<p[i]<<endl;
        p=(int *)realloc(p,1000);
        p=(int *)calloc(1000,sizeof(int));
        //int ara[10000000];
        int  *k;
  //      k=new int[1000];
  //      delete(k);
         free(k);
        return 0;
}
