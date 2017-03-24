#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<1000000>bs;//boundary is the size ....... use in prime
vector<long long int>primes; // use in prime

typedef long long int ll;

long long int pw(long long int a,long long int b) {
    long long int sum=1;
    for(long long int i=0; i<b; i++) {
        sum*=a;
    }
    return sum;
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

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    sieve(100000) ;
    ll n ;
    cin>>n;
    if(n==2){
        cout<<1<<endl;
        return  0;
    }
    if(n%2 == 0) cout<<2<<endl;
    else{
        if(is_prime(n)) cout<<1<<endl;
        else if(is_prime(n-2)) cout<<2<<endl;
        else cout<<3<<endl;
    }


    return 0;
}

