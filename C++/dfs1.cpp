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

map<ll , vector<ll> >graph ;
map<ll , ll> visited ;
stack<ll>lists ;
void dfs(ll start){
    visited[start] = 1 ;
    for(ll i = 0 ; i<graph[start].size() ; i++){
        if( !visited.count(graph[start][i]) ){
            dfs(graph[start][i]) ;
            lists.push(graph[start][i]) ;
        }
    }
}

int main(void) {
//    read ;
  //  write ;
    ll n , e ;
    while(4){

        graph.clear() ;
        visited.clear() ;
        while(!lists.empty()) lists.pop() ;

        inll(n) ; inll(e) ;
        if(n==0 && e==0) break ;

        ll start ;

        rep0(e , i){

            ll a , b ;

            inll(a)  ; inll(b) ;
            if(i==0) start = a ;
            graph[a].push_back(b) ;

        }

        dfs(start) ;
        lists.push(start) ;

        ll coun = 0 ;
        rep1( n , i){
            if(!visited.count(i)){
                if(coun!=0) cout<<" ";
                cout<<i ;
                coun = 1 ;
            }
        }

        ll i = 0 ;
        while(!lists.empty()){
            i++ ;
            if(coun == 0 ){
                if(i!=1) cout<<" " ;
            }
            else cout<<" ";
            cout<<lists.top() ;
            lists.pop() ;
        }
        cout<<endl;

    }


    return 0;
}


