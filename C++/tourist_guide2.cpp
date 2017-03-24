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


ll mat[110][110] ;
ll n , e ;
void reset(){
    rep0(n+1 , i){
        rep0(n+1 , j){
            if(i!=j) mat[i][j] = INT_MIN ;
            else mat[i][j] = 0 ;
        }
    }
}

int main(void) {
  //  read ;
 //   write ;
    ll cases = 0 ;
    while(4){
        inll(n) ; inll(e) ;
        cases++ ;
        if(n==0 && e==0) break ;
        reset() ;
        rep0(e , i){
            ll a,b,w ;
            inll(a) ; inll(b) ; inll(w) ;
            mat[a][b] = w - 1 ;
            mat[b][a] = w - 1 ;
        }

        ll start , endi  , num ;

        rep0(n+1 , k){
            rep0(n+1 , i){
                rep0(n+1 , j){
                    if(mat[i][k] != INT_MIN && mat[k][j] != INT_MIN){
                        mat[i][j] = max(  mat[i][j]  , min(mat[i][k] , mat[k][j]) ) ;
                    }
                }
            }
        }

        inll(start) ; inll(endi)  ; inll(num) ;
        ll cal  = mat[start][endi] ;
        ll ans ;
        if(start == endi) ans = 1 ;
        else{
            if(num%cal==0) ans = num/cal;
            else ans = (num/cal) + 1 ;
        }
        printf("Scenario #%lld\n" , cases) ;
        printf("Minimum Number of Trips = %lld\n\n" , ans  ) ;


    }

    return 0;
}








