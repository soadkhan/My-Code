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
    char a[20] ;
    char b[20] ;
    char khali[20] ;
    while(cin>>a>>b){
        if(strcmp(a , "0")==0 && strcmp( b , "0")== 0) break ;
        ll ans = 0 ;
        strcpy(khali , "00000000000000000") ;
        ll la = strlen(a) ;
        ll lb = strlen(b) ;
        char an[20] ;
        char bn[20] ;
        ll k = 0 ;
        for(ll i = la-1 ; i>=0 ; i--){
            an[k] = a[i] ;
            k++ ;
        }
        for(;k<=14 ; k++) an[k] = '0' ;
        an[14] = '\0' ;
         k = 0 ;
        for(ll i = lb-1 ; i>=0 ; i--){
            bn[k] = b[i] ;
            k++ ;
        }
        for(;k<=14 ; k++) bn[k] = '0' ;
        bn[14] = '\0';
       // cout<<an<<endl<<bn<<endl;
        for(ll i = 0  ; i<=14 ; i++) {
            if(an[i] + bn[i] + khali[i] >= (10+3*48 ) ){
                ans++ ;
                khali[i+1]++ ;
            }
        }
        if(ans==1) printf("%lld carry operation.\n" , ans) ;
        else if(ans>1) printf("%lld carry operations.\n" , ans) ;
        else printf("No carry operation.\n") ;
    }


    return 0;
}


