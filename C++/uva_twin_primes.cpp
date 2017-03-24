#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<190000000>bs;//boundary is the size ....... use in prime
vector<long long int>primes; // use in prime
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max_v(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min_v(long long int a,long long int  b){if(a<b ) return a;else return b;}

vector<long long int>twin;

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
	for(long long int i=0;i<(long long int)primes.size();i++)
		if(n%primes[i]) return false;
		return true;
}

void find_twins(void){
	for(long long int i=0;i<=20000000;i++)
		if(is_prime(i)&&is_prime(i+2)) twin.push_back(i);
}

int main(void)
{
	sieve(20000000);
	find_twins();
	long long int n;
	while(cin>>n){
		printf("(%lld, %lld)\n",twin[n-1],twin[n-1]+2);
	}
	return 0;
}

