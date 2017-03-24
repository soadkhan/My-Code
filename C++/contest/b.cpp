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
#define tc1(x)        printf("Case %lld: ",x)
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
int dx6[]= {0,0,1,-1,0,0};
int dy6[]= {1,-1,0,0,0,0};
int dz6[]= {0,0,0,0,1,-1};

long long int pw(long long int a,long long int b) {long long int sum=1;for(long long int i=0; i<b; i++) {sum*=a;}return sum;}
long long int gcd(long long int a,long long int b) {if(a%b==0) return b;else return gcd(b,a%b);}
void sieve(long long int up) {se_si=up+1;bs.set();bs[0]=0;bs[1]=0;for(long long int i=2; i<=se_si; i++)if(bs[i]) {for(long long int j=i*i; j<=se_si; j+=i)bs[j]=0;primes.push_back(i);}}
bool is_prime(long long int n) {if(n<=se_si)return bs[n];long long int l=primes.size();for(long long int i=0; i<l; i++)if(n%primes[i]==0)return false;return true;}

int main(void) {
    ll tests ;
    inll(tests) ;
    map<string , string > lists ;

    lists[ "February 13" ] = "Pohela Falgun" ;
    lists[ "February 14" ] = "Valentine's Day" ;
    lists[ "February 21" ] = "International Mother Language Day" ;
    lists[ "March 8" ] = "International Women's Day" ; //
    lists[ "March 21" ] = "International Color Day" ;
    lists[ "March 26" ] = "Bangladesh Independence Day" ;
    lists[ "April 1" ] = "April Fools Day" ; //
    lists[ "April 14" ] = "Pohela Boishakh" ;
    lists[ "May 1" ] = "May Day" ; //
    lists[ "June 19" ] = "Father's Day" ; //
    lists[ "July 18" ] = "Mandela Day" ; //
    lists[ "August 20" ] = "World Mosquito Day" ; //
    lists[ "October 31" ] = "Halloween" ; //
    lists[ "November 19" ] = "World Toilet Day" ; //
    lists[ "December 10" ] = "Human Rights Day" ;
    lists[ "December 16" ] = "Victory Day of Bangladesh" ;
    lists[ "December 25" ] = "Christmas Day" ;


    getchar() ;
    rep1(tests , cases){

        string a ;

        getline(cin , a) ;

        if(lists.count(a)){
            tc1(cases) ;
            cout<<lists[a]<<endl;
        }
        else{
            char str[100] ;



            ll l  = a.length() ;
            for(ll i = 0 ; i< l ; i++){
                str[i] = a[i] ;
            }
            str[l] = '\0' ;

            char month[100] ;

            ll  k ;
            for(k = 0 ; str[k]!=' ' ; k++){
               month[k] = str[k] ;
            }
            month[k] = '\0' ;

            cout<<str<<" "<<month<<endl;

            char lists2[100][100] ;

            strcpy(lists2[0] , "February 13") ;
            strcpy(lists2[1] , "February 14") ;
            strcpy(lists2[2] , "February 21") ;
            strcpy(lists2[3] , "March 8") ;
            strcpy(lists2[4] , "March 21") ;
            strcpy(lists2[5] , "March 26") ;
            strcpy(lists2[6] , "April 1") ;
            strcpy(lists2[7] , "April 14") ;
            strcpy(lists2[8] , "May 1") ;
            strcpy(lists2[9] , "June 19") ;
            strcpy(lists2[10] , "July 18") ;
            strcpy(lists2[11] , "August 20") ;
            strcpy(lists2[12] , "October 31") ;
            strcpy(lists2[13] , "November 19") ;
            strcpy(lists2[14] , "December 10") ;
            strcpy(lists2[15] , "December 16") ;
            strcpy(lists2[16] , "December 25") ;

            if( strcmp(month , "January") == 0  ){
                strcpy(month , "February") ;
            }

            if( strcmp(month , "January") == 0  ){
                strcpy(month , "February") ;
            }

            if( strcmp(month , "January") == 0  ){
                strcpy(month , "February") ;
            }






        }

    }


    return 0;
}


