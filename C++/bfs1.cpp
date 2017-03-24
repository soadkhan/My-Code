
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

int main(void) {
    //freopen("uva.txt","rt",stdin);
    //freopen("uva_out.txt","wt",stdout);

    int node = 0,n;
    int cases = 0;
    vector<int>lsmy[25];
    while(cin>>n){
        node++;
        for(int i=0;i<n;i++){
            int adj;
            cin>>adj;
            lsmy[node].push_back(adj);
            lsmy[adj].push_back(node);
        }
        if(node==19){
            cases++;
            printf("Test Set #%d\n",cases);
            int a;
            cin>>a;
            int lo,de;
            for(int i=0;i<a;i++){
                cin>>lo>>de;
                int visited[100];
                queue<int>qu;
                for(int j=0;j<26;j++) visited[j] = -1;
                qu.push(lo);
                visited[lo] = 0;
                int ans = -1;
                while(qu.empty()!=true){
                    int head = qu.front();
                    qu.pop();
                    for(int k=0;k<lsmy[head].size();k++){
                        if(visited[lsmy[head][k]]==-1){
                            qu.push(lsmy[head][k]);
                            visited[lsmy[head][k]] = visited[head] + 1;
                        }
                        if(lsmy[head][k]==de){
                            ans  = visited[lsmy[head][k]];
                            break;
                        }
                    }
                    if(ans!=-1) break;
                }
                printf("%2d to %2d: %d\n",lo,de,ans);
            }
            node = 0;
            for(int u=0;u<25;u++) lsmy[u].clear();
            cout<<endl;
        }

    }

    return 0;
}

