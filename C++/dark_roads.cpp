#include<bits/stdc++.h>
using namespace std;

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

int  dis_set[200010];


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

struct edge{
    int  a ;
    int  b ;
    int  w ;

    bool operator<( const edge & p)const
    {
        return w > p.w;
    }

} ;




bool compare(edge a,edge b){
    if(a.w<=b.w) return true ;
    else return false ;
}


int main(void) {
  //  read ;
 //   write ;
    ll n , e ;
    while(4){
        inll(n) ; inll(e) ;
        priority_queue <edge> lists ;
        if(n==0 && e==0) break ;
        ll sum = 0 ;

        rep0(e , i){

            dis_set[i] = i ;
            ll a, b, w ;
            inll(a) ; inll(b) ; inll(w) ; sum+=w ;
            edge dhu ; dhu.a = a ; dhu.b = b ; dhu.w =w ;
            lists.push(dhu) ;

        }

        ll mot = 0 ;
        ll k = 0 ;
        while(!lists.empty()){
            edge cal = lists.top() ;
            lists.pop() ;
            if( ! che_con(cal.a , cal.b )){
                mot+=cal.w ;
                union_fun( cal.a  , cal.b) ;
                k++ ;
                if(k>n+1) break ;
            }
        }
        cout<<sum-mot<<endl;
    }

    return 0;
}

