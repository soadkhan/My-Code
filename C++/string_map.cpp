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

ll fun(char* a, char* b , ll la , ll lb){

    if(la!=lb) return 0 ;
    map<char , ll>visited_a ;
    map<char , ll>visited_b ;
    map<char , char> mapping ;
    rep0( la , i){
        if(!visited_a.count(a[i])  ){
            visited_a[a[i]] = 1 ;
            if(!visited_b.count(b[i])){
                visited_b[ b[i] ] = 1;
                mapping[ a[i]  ] = b[i] ;
                continue ;
            }
            else return 0 ;
        }
        else{
            if(mapping[ a[i] ] == b[i] ) continue ;
            else return 0 ;
        }


    }

    return 1 ;
}


int main(void) {
    ll tests ;
    ll ans = 0 ;

    inll(tests) ;
    getchar() ;
    char** ara ;
    ara  = (char**)malloc(sizeof(char*)*tests) ;N
    map<ll , ll>len ;
    ll k  = 0 ;
    rep0(tests , u){
        ara[k] = (char*)malloc(sizeof(char) * (tests - u + 1) ) ;
        scanf("%s" , ara[k]) ;
        ll j = strlen(ara[k]) ;
        realloc( ara[k] , sizeof(char) * j+1 ) ;
        len[k] = j ;
        k++ ;
    }
    ll l  =  k ;
    for(ll i = 0 ; i< l-1 ; i++){
        for(ll j  = i+1 ; j<l ; j++){
            if(fun(ara[i] , ara[j] , len[i] , len[j] )==1) {
                ans++ ;
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}


