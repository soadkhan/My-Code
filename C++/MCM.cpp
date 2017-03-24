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


ld row[100] ;
ld col[100] ;
bool visited[100][100];
ld dp[100][100];
ld parenthesis[100][100];


ld mcm(ld be , ld en){
    if(be>=en) return 0;
    if(visited[be][en]) return dp[be][en];
    ld ans  =  1<<30;
    ld k ;

    for(ld mid  =  be ; mid<en ; mid++){
        ld total  =  mcm(be , mid ) +  mcm(mid+1 , en) + row[be]*col[mid]*col[en] ;
        if(total <  ans ){
            ans = total;
            k = mid ;
        }
    }


    dp[be][en] =  ans;
    parenthesis[be][en] =  k;
    visited[be][en] =  1;
    return ans;
}

void print_bal(ld be , ld en){
    if (be  == en ){
        cout<< "A" << be+1 ;
        return ;
    }
    else{
        cout<< "(";
        print_bal(be , parenthesis[be][en]);
        cout<<" x ";
        print_bal(parenthesis[be][en] + 1 , en );
        cout<< ")";
    }
}

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);
    ld n , cases = 0;
    while(cin>>n){
        if(n==0) break ;
        cases++ ;
        memset(visited , false , sizeof(visited)) ;
        memset(dp , 0 , sizeof (dp)) ;
        memset(parenthesis , 0 , sizeof (parenthesis)) ;
        for(ld i = 0 ;i< n ;i++)
            cin>> row[i] >> col[i];
        cout<<"Case "<<cases <<": ";
        mcm(0,n-1);
        print_bal(0,n-1);
        cout<<endl;
    }



    return 0;
}


