#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<100001000>bs;//boundary is the size ....... use in prime
vector<long long int>primes; // use in prime
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max_v(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min_v(long long int a,long long int  b){if(a<b ) return a;else return b;}

void sieve(long long int up){
	se_si=up+1;
	bs.set();
	bs[0]=0;
	bs[1]=0;
	for(long long int i=2;i<=se_si;i++)
		 if(bs[i]){
		 	for(long long int j=i*i;j<=se_si;j+=i)
			  bs[j]=0;
			  primes.push_back(i);
			}	
}

bool is_prime(long long int n){
	if(n<=se_si)
		return bs[n];
	long long int l=primes.size();
	for(long long int i=0;i<l;i++)
		if(n%primes[i]==0)
		 return false;
	return true;
}

long long int gcd(long long int a,long long int b){if(a%b==0) return b;else return gcd(b,a%b);}

int main(void)
{
//	freopen("uva.txt","rt",stdin);
//	freopen("uva_out.txt","wt",stdout);
	long long int n;
	sieve(10000);
	while(cin>>n){
		if(n<=2) printf("%lld is not the sum of two primes!\n",n);
		else if(n%2==1){
			if(is_prime(n-2)) printf("%lld is the sum of %lld and %lld.\n",n,2,n-2);
			else printf("%lld is not the sum of two primes!\n",n);
		}
		else{
			int fl=0;
			for(long long int i=(n/2+1);i>=2;i--){
				if(is_prime(n-i)&&is_prime(i)&&(i!=n-i)){
					printf("%lld is the sum of %lld and %lld.\n",n,min_v(n-i,i),max_v(n-i,i));
					fl=1;
					break;
				}
			}
			if(fl==0) printf("%lld is not the sum of two primes!\n",n);
		}	
	}
	return 0;
}

