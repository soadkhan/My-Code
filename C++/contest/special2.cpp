#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<10>bs;//boundary is the size ....... use in prime
vector<long long int>primes; // use in prime

typedef unsigned long long int ull;
typedef long long int ll;

#define fs            first
#define sc            second
#define sp            printf(" ")
#define nl            printf("\n")
#define pb(a)         push_back(a)

//setting an array or a vector
#define setzero(a)    memset(a,0,sizeof(a))
#define setneg(a)     memset(a,-1,sizeof(a))
#define setinf(a)     memset(a,126,sizeof(a))

// different types of case printing
#define tc1(x)        printf("Case %d: ",x)
#define tc2(x)        printf("Case #%d: ",x)
#define tc3(x)        printf("Case %d:\n",x)
#define tc4(x)        printf("Case #%d:\n",x)

//input
#define ini(x)        scanf("%d",&x)
#define ind(x)        scanf("%lf",&x)
#define inll(x)        scanf("%lld",&x)
#define incll(x)       scanf("%I64d",&x)
#define inch(x)        scanf("%c" , &x)
#define instr(x)       scanf("%s" , &x)


//printing in cout
#define pr1(x)        cout<<x<<"\n"
#define pr2(x,y)      cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)    cout<<x<<" "<<y<<" "<<z<<"\n"
#define pr4(w,x,y,z)  cout<<w<<" "<<x<<" "<<y<<" "<<z<<"\n"
#define fast          ios::sync_with_stdio(0)

//output
#define outi(x)      printf("%d" , x)
#define outll(x)     printf("%lld" x)
#define outch(x)     printf("%c" , x)
#define outstr(x)    printf("%s" , x)

// file input and output
#define read          freopen("uva.txt","r",stdin)
#define write         freopen("uva_out.txt","w",stdout)

//common looping
#define rep1(n ,i)     for(ll i = 1 ; i<=n ; i++ )
#define rep0(n ,i)     for(ll i = 0 ; i<n  ; i++ )

// graph pros
int dx4[]= {1,-1,0,0};
int dy4[]= {0,0,1,-1};
int dx6[]= {0,0,1,-1,0,0};
int dy6[]= {1,-1,0,0,0,0};
int dz6[]= {0,0,0,0,1,-1};

long long int pw(long long int a,long long int b) {long long int sum=1;for(long long int i=0; i<b; i++) {sum*=a;}return sum;}
long long int gcd(long long int a,long long int b) {if(a%b==0) return b;else return gcd(b,a%b);}
void sieve(long long int up) {se_si=up+1;bs.set();bs[0]=0;bs[1]=0;for(long long int i=2; i<=se_si; i++)if(bs[i]) {for(long long int j=i*i; j<=se_si; j+=i)bs[j]=0;primes.push_back(i);}}
bool is_prime(long long int n) {if(n<=se_si)return bs[n];long long int l=primes.size();for(long long int i=0; i<l; i++)if(n%primes[i]==0)return false;return true;}

int main(void) {
    ll tests ;
    inll(tests) ;

    rep1(tests , cases ){

        ll ara[2200] ;
        char dir[2200] ;

        ll tun , r  ;
        inll(tun) ; inll(r) ;

        rep0( tun , i){
            inll(ara[i]) ;
        }

        for(ll i = 0  ; i< tun ; i++){
            getchar() ;
            inch(dir[i]) ;
        }

        ll ara_fin[2200] ;
        char dir_fin[2200] ;
        ll k = 0 ;
            char d ;
        for(ll i = 0 ; i<tun ; i++){

            if(i==0){
                d = dir[i] ;
                ara_fin[k] = ara[i]  ;
                dir_fin[k] = dir[i] ;
                k++ ;
            }
            else{
                if(dir[i] ==  d ){
                    ara_fin[k]+= ara[i] ;
                }
                else{
                    d = dir[i] ;
                    ara_fin[k] = ara[i] ;
                    dir_fin[k] = dir[i] ;
                    k++ ;
                }
            }
        }

        ll ans = 0  ;
        ll r2 = 2 * r ;

        if(k==1){
            ans+= ara_fin[0] / r2  ;
            if(ara_fin[0] % r2 != 0)
                ans++;
            tc1(cases) ;
        printf("%lld\n" , ans) ;
        }

        for(ll i = 0  ; i<k ; i++){
            if(ara_fin[i] < r2){
                ans++ ;
                if(i == tun-1) continue ;
                ara_fin[i+1] -= r ;
                if(ara_fin[i+1] < 0 ) ara_fin[i+1] = 0  ;
            }
            else{
                ans+= ara_fin[i] / r2  ;
                ll md = ara_fin[i] % r2 ;
                if(md!= 0 ){
                    ans++ ;
                    if(i == tun-1) continue ;
                    ara_fin[i+1] -= r ;
                }
            }
        }


        tc1(cases) ;
        printf("%lld\n" , ans) ;


    }


    return 0;
}


