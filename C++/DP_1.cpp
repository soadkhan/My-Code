#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<10>bs;//boundary is the size ....... use in prime
vector<long long int>primes; // use in prime
typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;
long long int pw(long long int a,long long int b) {
    long long int sum=1;
    for(long long int i=0; i<b; i++) {
        sum*=a;
    }
    return sum;
}
long long int dif(long long int a,long long int b) {
    if(a>b) return (a-b);
    else return (b-a);
}
int strlen(string s) {
    int len = 0;
    while (s[len]) len++;
    return len;
}
long long int max_v(long long int a,long long int  b) {
    if(a>b ) return a;
    else return b;
}
long long int min_v(long long int a,long long int  b) {
    if(a<b ) return a;
    else return b;
}
long long int gcd(long long int a,long long int b) {
    if(a%b==0) return b;
    else return gcd(b,a%b);
}
void sieve(long long int up) {
    se_si=up+1;
    bs.set();
    bs[0]=0;
    bs[1]=0;
    for(long long int i=2; i<=se_si; i++)if(bs[i]) {
            for(long long int j=i*i; j<=se_si; j+=i)bs[j]=0;
            primes.push_back(i);
        }
}
bool is_prime(long long int n) {
    if(n<=se_si)return bs[n];
    long long int l=primes.size();
    for(long long int i=0; i<l; i++)if(n%primes[i]==0)return false;
    return true;
}


ld dp[1100][1100] ;
ld we[1100];
ld pr[1100];
ld cap ;
ld n ;

void dp_fun(){
    for(ld i  = 0 ; i<=cap ; i++  )
        dp[0][i] = 0;
    for(ld i = 1; i<=n;i++)
        for(ld w = 0 ;w <= cap ;w++){
            if(we[i]<=w) dp[i][w] = max(dp[i-1][w] , pr[i]+dp[i-1][w-we[i]]);
            else dp[i][w] = dp[i-1][w];
        }
}





int main(void) {
   // freopen("uva.txt","rt",stdin);
   // freopen("uva_out.txt","wt",stdout);

    ld test  ;
    scanf("%ld" , &test ) ;
    while(test--){
        scanf("%ld" , &n );
        for(ld i  = 1 ;i<= n ;i++ )
            scanf("%ld%ld" , &pr[i] , &we[i] );
        ld people  ;
        scanf("%ld" , &people);
        ld ans = 0;
        ld ara[1000];
        for(ld j  = 0 ;  j <people ; j++  ){
            cin>>ara[j] ;
            cap =  max(cap , ara[j]);
        }

        dp_fun();
        for(ld i = 0 ;i<people;i++)
            ans+=dp[n][ara[i]];

        cout<<ans<<endl;
    }
    return 0 ;
}


