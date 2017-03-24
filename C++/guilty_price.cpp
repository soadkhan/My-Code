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
ll r , c ;

struct node{
    ll x ;
    ll y ;
};


char str[100][100] ;
ll ans = 1 ;

void bfs(node start){
    queue<node>lists ;
    lists.push(start) ;

    while(! lists.empty()){
        node hand = lists.front()  ; lists.pop() ;
        rep0(4 , i){
            ll x = hand.x + dx4[i] ;
            ll y = hand.y + dy4[i] ;
            if( x >= 0 && y>= 0 && x<c && y<r && str[y][x]=='.'){
                node dhu ; dhu.x = x ; dhu.y = y ;
                ans++ ;
                lists.push(dhu) ;
                str[y][x] = 'v' ;
            }
        }
    }
}


int main(void) {
    ll tests , cases = 0;
    inll(tests) ;
    while(tests--){
        cases++ ;
        node start ;
        ans = 1 ;
        inll(c) ; inll(r) ;
        rep0(r , i) cin>>str[i] ;
        rep0(r , i){
            rep0( c, j){
                if(str[i][j]=='@'){
                    start.x = j ;
                    start.y = i ;
                    goto m ;
                }
            }
        }
        m:;
        bfs(start) ;
        tc1(cases) ;
        cout<<ans<<endl;


    }



    return 0;
}


