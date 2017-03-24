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

void fun(string &ss){
    ld l = ss.length();
    for(ld i=0;i<l;i++){
        if(ss[i]>='0'&&ss[i]<='9') continue;
        else if(ss[i]=='-') continue;
        else if(ss[i]<=67) ss[i]='2';
        else if(ss[i]<=70) ss[i]='3';
        else if(ss[i]<=73) ss[i]='4';
        else if(ss[i]<=76) ss[i]='5';
        else if(ss[i]<=79) ss[i]='6';
        else if(ss[i]<=83) ss[i]='7';
        else if(ss[i]<=86) ss[i]='8';
        else ss[i] = '9';
    }
}




int main(void) {
  //  freopen("uva.txt","rt",stdin);
  //  freopen("uva_out.txt","wt",stdout);
    string ss;
    while(cin>>ss){
        fun(ss);
        cout<<ss<<endl;
    }
    return 0;
}


