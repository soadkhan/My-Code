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


int main(void) {
    ll tests , cases = 0 , n ;
    inll(tests) ;
    rep1(tests , cases){
        inll(n) ;
        map< pair<ll , ll> , ll  >edges ;
        map< ll , vector<ll> >graph ;
        ll dis[30000+10] ;
        setneg(dis) ;
        rep0(n-1 , i){
            ll a, b, w ;
            inll(a) ; inll(b) ; inll(w) ;
            graph[a].push_back(b) ;
            graph[b].push_back(a) ;
            edges[make_pair(a , b)] = w ;
            edges[make_pair(b , a)] = w ;
        }

        ll st = 0 ;
        ll max_dis = 0 ;
        queue<ll>lists ;
        lists.push(st) ;
        dis[st] = 0;

        while(!lists.empty()){
            ll hand = lists.front() ; lists.pop() ;
            ll l  = graph[hand].size() ;
            for(ll i = 0  ; i<l ; i++){
                if(dis[graph[hand][i]] < 0 ){
                    lists.push(graph[hand][i]) ;
                    dis[graph[hand][i]] = dis[hand] + edges[make_pair(hand , graph[hand][i])] ;
                    if(dis[graph[hand][i]] > max_dis){
                        max_dis = dis[graph[hand][i]] ;
                        st = graph[hand][i] ;
                    }
                }
            }
        }

        max_dis = 0;
        setneg(dis) ;
        dis[st] = 0;
        lists.push(st) ;

        while(!lists.empty()){
            ll hand = lists.front() ; lists.pop() ;
            ll l = graph[hand].size() ;
            for(ll i = 0 ; i<l ; i++){
                if(dis[graph[hand][i]]<0){
                    lists.push( graph[hand][i]  ) ;
                    dis[ graph[hand][i] ] = dis[hand] + edges[make_pair( hand , graph[hand][i]  )] ;
                    if(dis[ graph[hand][i] ] > max_dis) max_dis = dis[ graph[hand][i] ] ;
                }
            }
        }

        tc1(cases) ;
        printf("%lld\n" , max_dis) ;

    }


    return 0;
}


