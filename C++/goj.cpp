#include <stdio.h>
#include <math.h>
#include <limits.h>

#include <iostream>
using namespace std ;

int minVal(int x, int y) { return (x < y)? x: y; }

int getMid(int s, int e) {  return s + (e -s)/2;  }

int RMQUtil(int *st, int ss, int se, int qs, int qe, int index)
{

    if (qs <= ss && qe >= se)
        return st[index];


    if (se < qs || ss > qe)
        return INT_MAX;


    int mid = getMid(ss, se);
    return minVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}

int RMQ(int *st, int n, int qs, int qe)
{

    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }

    return RMQUtil(st, 0, n-1, qs, qe, 0);
}

int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{

    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }


    int mid = getMid(ss, se);
    st[si] =  minVal(constructSTUtil(arr, ss, mid, st, si*2+1),
                     constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}

int *constructST(int arr[], int n)
{

    int x = (int)(ceil(log2(n)));


    int max_size = 2*(int)pow(2, x) - 1;

    int *st = new int[max_size];


    constructSTUtil(arr, 0, n-1, st, 0);


    return st;
}

int main()
{
    long long int tests , cases = 0 ;
    //cin>>tests ;
    scanf("%d", &tests) ;
    while(tests--){
        cases++ ;
      //  cout<<"Case "<<cases<<":"<<endl;
        printf("Case %lld:\n", cases ) ;
        int arr[100000] = {0} ;
        int k  , qu ;
       // cin>>k>>qu ;
       scanf("%d%d", &k ,&qu) ;
        for(int  i = 0 ; i< k ; i++)
          //  cin>>arr[i] ;
          scanf("%d", &arr[i]) ;
        int n = sizeof(arr)/sizeof(arr[0]);
        int *st = constructST(arr, n);
        while(qu--){
            int a , b;
          //  cin>>a>>b ;
            scanf("%d%d", &a , &b) ;
            int qs = a-1;
            int qe = b-1;
            printf("%d\n",RMQ(st, n, qs, qe));
        }
    }
    return 0;
}

