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

struct edge{
    int start ;
    int endi ;
    double d ;
};

edge e[10100] ;

struct node{
    double x ;
    double y ;
};

node n[100+10] ;

double matrix[110][110] ;

int  dis_set[110];

int  find_head(int  a){
    if(dis_set[a] == a) return a;
    else{
        dis_set[a] = find_head(dis_set[a]);
        return find_head(dis_set[a]) ;
    }
}

bool che_con(int  a, int  b){
    return ((find_head(a)==find_head(b))?true:false);
}

void union_fun(int  a,int  b){
    int  u = find_head(a);
    int  v = find_head(b);
    if(u!=v) dis_set[u] = v;
}

double d_fun( node a, node b ){
    return sqrt( ( a.x - b.x )*( a.x - b.x ) + (a.y - b.y)*(a.y - b.y) ) ;
}


bool compare(edge a, edge b ){
    if(a.d > b.d) return false ;
    else return true ;
}


int main(void) {
    ll tests  ,cases = 0;
    inll(tests) ;
    while(tests--){

        cases++ ;
        if(cases!=1) cout<<endl;


        for(ll i = 0 ; i<= 105 ; i++){
            for(ll j = 0 ; j<= 105 ; j++){
                matrix[i][j] = -1 ;
            }
            dis_set[i] = i ;
        }


        ll nodes ;
        inll(nodes) ;
        rep0(nodes , i){
            scanf("%lf%lf" , &n[i].x , &n[i].y) ;
        }

        for(ll i = 0  ; i< nodes ; i++){
            for(ll j =  i+1 ; j<nodes ; j++){
                if(matrix[i][j] == -1)matrix[i][j] = matrix[j][i] = d_fun( n[i] , n[j] ) ;
            }
        }

        ll n_e = 0 ;
        for(ll i  = 0 ; i<nodes ; i++){
            for(ll j = i+1 ; j<nodes ; j++){
                e[n_e].start = i ;
                e[n_e].endi = j ;
                e[n_e].d = matrix[i][j] ;
                n_e++ ;
            }
        }

        sort( e, e+n_e , compare ) ;
        ll br_c = 0 ;
        double ans =0.0 ;

        for(ll i  = 0 ; i<n_e ; i++){
            if(br_c==nodes)  break;
            if(!che_con(e[i].start , e[i].endi )){
                ans+= e[i].d ;
                union_fun(e[i].start , e[i].endi) ;
                br_c++ ;
            }
        }

        printf("%.2lf\n" ,ans) ;

    }
    return 0;
}


