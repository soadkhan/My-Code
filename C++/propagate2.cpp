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
#define outll(x)     printf("%lld" ,  x)
#define outch(x)     printf("%c" , x)
#define outstr(x)    printf("%s" , x)
#define outn           printf("\n")

// file input and output
#define read          freopen("uva.txt","r",stdin)
#define write         freopen("uva_out.txt","w",stdout)

//common looping
#define rep1(n ,i)     for(ll i = 1 ; i<=n ; i++ )
#define rep0(n ,i)     for(ll i = 0 ; i<n  ; i++ )

#define MX 100500

// graph pros
int dx4[]= {1,-1,0,0};
int dy4[]= {0,0,1,-1};
int dx6[]= {0,0,1,-1,0,0};
int dy6[]= {1,-1,0,0,0,0};
int dz6[]= {0,0,0,0,1,-1};

long long int pw(long long int a,long long int b) {long long int sum=1;for(long long int i=0; i<b; i++) {sum*=a;}return sum;}
long long int gcd(long long int a,long long int b) {if(a%b==0) return b;else return gcd(b,a%b);}
void sieve(long long int up) {se_si=up+1;bs.set();bs[0]=0;bs[1]=0;for(long long int i=2; i<=se_si; i++)if(bs[i]) {for(long long int j=i*i; j<=se_si; j+=i)bs[j]=0;primes.push_back(i);}}
bool is_prime(long long int n) {if(n<=se_si)return bs[n];long long int l=primes.size();for(long long int i=0; i<l; i++)if(n%primes[i]==0)return false;return true;}



char ara[MX] ;
ll tree[3*MX] ;
ll pro[3*MX] ;

ll n ;

void push_down(ll nd , ll be , ll en){
    ll left  = nd*2 ;
    ll right  = left+1 ;
    ll mid  = (be+en)/2 ;

    pro[left] = pro[nd] ;
    pro[right] = pro[nd] ;

    tree[left] = (mid - be + 1 )*pro[left] ;
    tree[right] = (en - mid  )*pro[right] ;

    pro[nd] = -1 ;
}



void init(ll nd , ll be , ll en ){
    if( be == en){
        tree[nd] = ara[be] ;
        return ;
    }

    ll left  = 2*nd ;
    ll right =  left + 1 ;
    ll mid = (be+en)/2 ;

    init(left , be , mid) ;
    init(right , mid+1 , en) ;

    tree[nd] = tree[left] +  tree[right] ;
    return ;
}

void add(ll nd , ll be , ll en , ll i , ll  j, ll new_val ){
    if(i<=be && j>=en){
        pro[nd]=new_val ;
        tree[nd]=(en-be+1)*new_val ;
        return ;
    } // vitore

    if(i>en || j<be) {
        return ;
    } // baire

    if(pro[nd]!=-1) push_down(nd , be , en) ;

    ll left  =  nd*2 ;
    ll right =  left + 1 ;

    ll mid  = (be+en)/2 ;

    add(left , be , mid , i , j , new_val) ;
    add(right , mid+1 , en, i , j , new_val) ;

    tree[nd] = tree[left] + tree[right]  ;

    return ;
}


ll  sum(ll nd  , ll be , ll en , ll i  , ll j ){

    if(i>en || j<be) {
        return 0 ;
    } // baire

    if(i<=be && j>=en){
        return ( tree[nd] )  ;
    }// vitore

    if(pro[nd]!=-1) push_down(nd , be , en) ;

    ll left  =  nd*2 ;
    ll right =  left + 1 ;

    ll mid  = (be+en)/2 ;

    ll ret_left = sum(left , be , mid , i , j ) ;
    ll ret_right  = sum(right , mid+1 , en , i , j ) ;

    tree[nd] = tree[left] + tree[right] ;

    return  ( ret_left + ret_right ) ;

}



int main(void) {
   // read ;
   // write ;
    ll tests ;
    inll(tests) ;
    rep1(tests , i){
        tc3(i) ;
        setzero(tree) ;
        setneg(pro) ;
        ll  n , q ;
        inll(n) ; inll(q) ;
        while(q--){
            ll cmd , be , en , ad ;
            inll(cmd) ;
            if(cmd==1){
                inll(be) ; inll(en) ; inll(ad) ;
                add(1 , 0 , n-1 , be , en , ad) ;
            }
            else{
                inll(be ); inll(en) ;
                ll s = sum(1 , 0 , n-1 , be , en) ;
                ll num = en - be + 1 ;
                if(s%num == 0 ) {outll(s/num) ; outn ;}
                else{
                    ll gc = __gcd(s , num) ;
                    printf("%lld/%lld\n" , (s/gc) , (num/gc)) ;
                }
            }
        }
    }
    return 0;
}



