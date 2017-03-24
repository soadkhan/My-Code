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

struct node{
    char x[10] ;
    char y[10] ;
};

bool is_equal(node a , node  b){
    if(strcmp(a.x , b.x) == 0 && strcmp(a.y , b.y)== 0) return true ;
    else return false ;
}

void  cal(node ched , node a , node b){
    double x  = atof(a.x) + atof(b.x) - atof(ched.x) ;
    double y  = atof(a.y) + atof(b.y) - atof(ched.y) ;
    printf("%.3lf %.3lf\n" , x , y) ;
}

int main(void) {
    node a1 , a2 , b1 , b2 , ched ;
    while(cin>>a1.x>>a1.y >> a2.x >> a2.y >>b1.x >>b1.y >>b2.x >>b2.y){
        if(is_equal(a1,b1)) cal(a1 , a2 , b2) ;
        else if(is_equal(a1 , b2)) cal(a1 , a2 , b1) ;
        else if(is_equal(a2 , b1)) cal(a2 , a1 , b2) ;
        else if(is_equal(a2 , b2)) cal(a2 , a1 , b1) ;
    }
    return 0;
}


