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

ll  dis_set[110];

ll  find_head(ll  a){
    if(dis_set[a] == a) return a;
    else{
        dis_set[a] = find_head(dis_set[a]);
        return find_head(dis_set[a]) ;
    }
}

bool che_con(ll  a, ll  b){
    return ((find_head(a)==find_head(b))?true:false);
}

void union_fun(ll  a,ll  b){
    ll  u = find_head(a);
    ll  v = find_head(b);
    if(u!=v) dis_set[u] = v;
}

struct edge{
    ll start ;
    ll endi ;
    ll w ;
};

bool compare(edge a , edge b){
    if(a.w <= b.w) return true ;
    else return false ;
}

int main(void) {
  //  read ;
  //  write ;
    ll n , e ;
    ll cases = 0 ;
    while(4){
        cases++ ;
        inll(n) ; inll(e) ;
        vector<edge>lists ;
        if(n==0 && e==0) break ;


        rep0( e , i) {
            edge dhu ;
            inll(dhu.start) ; inll(dhu.endi) ; inll(dhu.w) ;
            dhu.w--;
            lists.push_back(dhu) ;
        }

        ll be , en , num ;
        inll(be) ; inll(en) ; inll(num) ;

        sort(lists.begin() , lists.end()  , compare ) ;

        ll ans = 0 ;

        for(ll  i = 0 ; i< e ; i++){

            rep0( n+2 , k) dis_set[k] = k ;

            for(ll j = i ; j< e ; j++){

                if(!che_con(lists[j].start , lists[j].endi)){
                    union_fun(lists[j].start , lists[j].endi ) ;
                }

                if( che_con(be , en) ){
                    ans = max( ans , lists[i].w ) ;
                    break ;
                }

            }

        }

        printf("Scenario #%lld\n" , cases) ;
        if(num%ans==0) printf("Minimum Number of Trips = %lld\n\n" , num/ans) ;
        else printf("Minimum Number of Trips = %lld\n\n" , (num/ans) + 1) ;

    }


    return 0;
}


