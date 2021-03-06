#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
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
ll val[1000] ;
ll wt[1000] ;
ll dp[1000][1000] ;


/*
4 7
1 1
4 3
5 4
7 5
*/

int main(void) {
    memset(dp , 0 , sizeof(dp)) ;

    ll total;
    inll(n) ; inll(total) ;

    rep1(n , i){
        inll(val[i]) ; inll(wt[i]) ;
    }

    for(ll i= 0 ; i<= n ; i++){
        for(ll j = 0 ; j <= total ; j++){
            if(i==0 || j==0) dp[i][j] = 0 ;
            else if(wt[i] > j ) dp[i][j] = dp[i-1][j] ;
            else dp[i][j] =  max( val[i] + dp[i-1][j - wt[i] ] , dp[i-1][j] ) ;
        }
    }

    for(ll i = 0 ; i<= n ; i++){
        for(ll j = 0 ; j<= total ; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}


