#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<1001000>bs;//boundary is the size ....... use in prime
vector<long long int>primes; // use in prime
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max_v(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min_v(long long int a,long long int  b){if(a<b ) return a;else return b;}
void sieve(long long int up){se_si=up+1;bs.set();bs[0]=0;bs[1]=0;for(long long int i=2;i<=se_si;i++) if(bs[i]){for(long long int j=i*i;j<=se_si;j+=i) bs[j]=0;primes.push_back(i);}}
bool is_prime(long long int n){if(n<=se_si) return bs[n];for(long long int i=0;i<(long long int)primes.size();i++)if(n%primes[i]) return false;return true;}

long long int find_up(long long int n,long long int &pos){
	long long int l=primes.size();
	for(long long int i=l-1;i>=0;i--)
		if(primes[i]<=n) {
			pos=i;
			return primes[i];
			
		}
}

int main(void)
{
//	freopen("uva.txt","rt",stdin);
    sieve(1000100);
    long long int count=0;
    long long int n;
    while(scanf("%lld",&n)==1){
    	if(n==0) break;
        cout<<n<<":"<<endl;
    	if(n==4){
    		printf("2+2\n");
    		continue;
    	}
    	int fl=0;
    	long long int pos;
    	long long int ub=find_up(n,pos);
        long long int lb=n-ub;
        while(lb<=ub){
        	if(is_prime(lb)) {
        		printf("%lld+%lld\n",lb,ub);
        		fl=1;
        		break;
        	}
        	else {
        		pos--;
        		ub=primes[pos];
        		lb=n-ub;
        	}	
        }
    	if(fl==0) printf("NO WAY!\n");
    }
	return 0;
}

