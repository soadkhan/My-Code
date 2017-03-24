
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ll t,n,i,cases=0;
    vector<ll>a;

    scanf("%lld",&t);

    while(t--){
        scanf("%lld",&n);
        for(i = 0 ; i < n ; i++){
            ll tmp;
            scanf("%lld",&tmp);

            a.push_back(tmp);
        }

        ll p , k;

        scanf("%lld",&p);
        cases++;
        printf("Case %lld:\n",cases);
        while(p--){
            ll q = 0;
            q++;
            ll tmp1;
            ll flag = 0;

            scanf("%lld",&tmp1);
            for(i = 0 ; i< n ; i++){
               if(flag == 0){
                if(a[i]%tmp1 == 0){
                    if((a[i]/tmp1)%2==1){
                        flag = 1;
                    }
                    else{
                        flag = 0;
                    }
                }
                else{
                    if(((a[i]/tmp1)+1)%2 == 1){
                        flag = 1;
                    }
                    else
                        flag = 0;
                }
               }

               else{
                  if(a[i]%tmp1 == 0){
                    if((a[i]/tmp1)%2==1){
                        flag = 0;
                    }
                    else{
                        flag = 1;
                    }
                }
                else{
                    if(((a[i]/tmp1)+1)%2 == 1){
                        flag = 0;
                    }
                    else
                        flag = 1;
                }
               }

                //cout<<flag<<endl;
            }

            if(flag == 1){
                printf("Query %lld: Win\n",q);
            }
            else{
              printf("Query %lld: Lose\n",q);
            }
        }
    }

    return 0;
}
