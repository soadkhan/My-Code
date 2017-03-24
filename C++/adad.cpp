#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define bits __builtin_popcountll
#define I ios_base::sync_with_stdio
#define C cin.tie
#define rll(x) scanf("%I64d",&x)
#define P printf
#define pll(x) printf("%I64d",(x))
#define rep(n) for(ll i=0;i<(n);++i)
#define lfor(i,a,n) for(ll i=a;i<n;++i)
#define per(n) for(ll i=(n)-1;i>=0;--i)
#define rd(x) scanf("%d",&(x))
#define pd(x) printf("%d",(x))
#define pds(x) printf("%d ",(x))
#define repd(n) for(int i=0;i<(n);++i)
#define dfor(i,a,n) for(int i=a;i<n;++i)
#define mset(x,v) memset(x,v,sizeof(x))
#define all(c) (c).begin(),(c).end()
#define F first
#define S second
using namespace std;
   void setup()
    {
      I(false);C(NULL);C(NULL);cout.precision(10);
    }
     ll n=1000000000;
ll a[100000000],sum[100000000];
  int main()
   {
   	freopen("uva.txt","rt",stdin);
     setup();
     a[0]=1;sum[0]=1;ll sz=0;
    for(int i=1;a[i-1]<=n;++i)
    {
        a[i]=a[i-1]*2;
        sum[i]=sum[i-1]+a[i];++sz;
    }
    int t;ll ans,n;
    cin>>t;
    while(t--)
    {ans=0;
    cin>>n;
    ll val;

    for(int i=0;i<=sz;++i)
    {
        if(n<=a[i])
        {
            val=sum[i];break;
        }
    }

    ans+=n*(n+1)/2LL;
    cout<<ans-(2*val)<<"\n";



    }




      return 0;
   }
