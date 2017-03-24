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

char str[510][510] ;
bool visited[510][510] ;
ll store[510][510] ;

ll r , c ;

struct node {
    ll x ;
    ll y ;
};

ll ans =  0 ;

void bfs(node start){

    if(str[start.x][start.y]=='#'){
        ans = 0;
        return ;
    }

    if(store[start.x][start.y]!=-1){
        ans = store[start.x][start.y] ;
        return ;
    }

    vector<node>use ;
    use.push_back(start) ;

    queue<node>lists ;
    if(str[start.x][start.y]=='C') {
        ans++ ;
        str[start.x][start.y] = 'v' ;
        visited[start.x][start.y] = true ;
    }

    lists.push(start) ;
    while(!lists.empty()){
        node hand  = lists.front() ;
        lists.pop() ;

        rep0(4 , i){
            ll x = hand.x + dx4[i] ;
            ll y = hand.y + dy4[i] ;

            if( ( x>= 0 && x<r &&y>=0 && y<c)&&(str[x][y]!='v'&&str[x][y]!='#') ){

                node dhu ; dhu.x = x ; dhu.y = y ;
                if(str[x][y]=='C'){
                    ans++ ;
                }
                str[x][y] = 'v' ;
                lists.push(dhu)  ;
                use.push_back(dhu) ;

            }

        }

    }

    ll l  = use.size() ;

    rep0(l , i) {
        store[ use[i].x ][ use[i].y ] = ans ;
        visited[ use[i].x  ][  use[i].y ] = true ;
    }

}


int main(void) {
//    read ;
//    write ;
//
    ll tests , cases = 0 ;
    inll(tests) ;
    while(tests--){

        cases++ ;
        tc3(cases) ;
        ll q ;
        inll(r) ; inll(c) ; inll(q) ;
        getchar() ;

        for(ll i = 0 ; i<=r ; i++){
            for(ll j  =0  ; j<= c; j++){
                visited[i][j] = false;
            }
        }

        for(ll i = 0 ; i<=r ; i++){
            for(ll j = 0 ; j<=c ; j++){
                store[i][j] = -1 ;
            }
        }

        rep0(r , i) instr(str[i]) ;

        while(q--){

            ans = 0 ;
            ll x, y ;
            inll(x) ; inll(y) ;
            node start ;
            start.x = x-1 ;
            start.y = y-1 ;
            bfs(start) ;

            printf("%lld\n" ,ans) ;
        }

    }

    return 0;
}

