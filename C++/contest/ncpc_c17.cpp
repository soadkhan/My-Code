#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int go()
{
    long long int Tn, L;
    //cin>>Tn;
    scanf("%lld" , &Tn);
    scanf("%lld" , &L) ;
    long long int Tnl[2100];
    char Dir[2100];
    long long int K=0, ans=0, i;
   long long  int L2 = 2*L;

    for(i=0;i<Tn;i++)
    {
        scanf("%lld" , &Tnl[i]) ;
    }

    for(i=0;i<Tn;i++)
    {
        getchar() ;
        scanf("%c" , &Dir[i]);

    }


    for(i=0; i<Tn; i++)
    {

        if(Tnl[i] == 0 ) continue ;
        else if(Tnl[i] < L2 && i != Tn-1){
                cout<<"pr"<<i<<endl ;
                ans++ ;
                char d = Dir[i+1] ;
                long long int k = L ;
                for(long long int u = i+1 ; u<Tn ; u++){
                    if(d != Dir[u]) break ;
                    long long int temp  = Tnl[u] ;
                    Tnl[u] = Tnl[u] - k ;
                    if(Tnl[u] <  0 ) Tnl[u] = 0 ;
                    k = k - temp ;
                    i++ ;
                }
                continue;
        }
        else if(i<Tn-1 && Dir[i]==Dir[i+1])
        {

            ans = ans + Tnl[i]/L2;
            Tnl[i+1]=Tnl[i+1] + (Tnl[i]%L2 ) ;
        }

        else{
            ans = ans + Tnl[i]/L2;
            if(Tnl[i]%L2 != 0)
            {
                if(Tnl[i]%L2 <= L)
                {
                //    cout<<"pr"<<endl ;
                    Tnl[i+1]=Tnl[i+1] - L;
                    if(Tnl[i+1]  < 0 ) Tnl[i+1] = 0 ;
                }
                ans++;
            }
        }

    }
    return ans;
}

int main()
{
    long long int Tc;
    long long int j=0;

    scanf("%lld" , &Tc) ;
    while(Tc>0)
    {
        j++;
        printf("Case %lld: %lld\n" , j  , go()) ;
        Tc=Tc-1;
    }

}
