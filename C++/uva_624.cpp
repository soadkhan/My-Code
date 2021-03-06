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

ll n ;
bool dp[22][10000100] ;
ll coins[200] ;

void dp_fun( ll total ){
    rep0(n+1 , i){
        rep0(total+1 , j){
            if(i==0 && j==0) dp[i][j]  = true ;
            else if( i==0 ) dp[i][j] = false ;
            else if( j==0 ) dp[i][j] = true ;
            else if( coins[i] <= j ) dp[i][j] = dp[i-1][j] | dp[i-1][j - coins[i] ] ;
            else dp[i][j] = dp[i-1][j] ;
        }
    }
}

/*
void print_solution(ll i  , ll j ){
    if(i==0 || j==0) return ;
    if(dp[i-1][j] == dp[i][j]) print_solution(i-1 , j) ;
    else{
        print_solution(i-1 , j - coins[i] ) ;
        printf("%I64d " , coins[i]) ;
    }
}
*/

void print_solution(ll i , ll j ){
    stack<ll> ans ;
    while(4){
        if(i==0 || j==0) break ;
        if(dp[i-1][j] == dp[i][j]) {
            i = i - 1 ;
        }
        else{
            ans.push(coins[i]) ;
            j = j - coins[i] ;
            i = i - 1 ;

        }
    }
    while(ans.empty()!= true){
        printf("%I64d " , ans.top()) ;
        ans.pop() ;
    }
}


int main(void) {
    ll total ;
    while(cin>>total){
        inll(n) ;
        rep1( n , i) inll(coins[i]) ;
        dp_fun(total) ;
        for(ll i = total ; i>= 0  ; i--) {
            if(dp[n][i]){
                print_solution( n , i) ;
                printf("sum:%I64d\n" , i) ;
                break ;
            }
        }
    }


    return 0;
}


