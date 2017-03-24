#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<1001010>bs;//boundary is the size ....... use in prime
vector<long long int>primes; // use in prime
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max_v(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min_v(long long int a,long long int  b){if(a<b ) return a;else return b;}
void sieve(long long int up){se_si=up+1;bs.set();bs[0]=0;bs[1]=0;for(long long int i=2;i<=se_si;i++) if(bs[i]){for(long long int j=i*i;j<=se_si;j+=i) bs[j]=0;primes.push_back(i);}}
bool is_prime(long long int n){if(n<=se_si) return bs[n];for(long long int i=0;i<(long long int)primes.size();i++)if(n%primes[i]) return false;return true;}
int main(void)
{
	//freopen("uva.txt","rt",stdin);
	sieve(1001010);
	long long int test ;
	long long int lb,ub;
	cin>>test;
	while(test--){
		cin>>lb>>ub;
		long long int lb_p,len,a,ans,max=0,flag=0;
		map<long long int , long long int>list;
		map<long long int , long long int>::iterator it;
		vector<long long int>lim_primes;
		for(long long int i=0;primes[i]<=ub;i++)
			if(primes[i]>=lb&&primes[i]<=ub)
				lim_primes.push_back(primes[i]);
		len=lim_primes.size();
		if(len==0||len==1) printf("No jumping champion\n");
		else if(len==2) printf("The jumping champion is %lld\n",lim_primes[1]-lim_primes[0]);
		else{
			a=lim_primes[0];
			for(long long int i=1;i<len;i++){
				list[lim_primes[i]-a]++;
				if(list[lim_primes[i]-a]>=max) max=list[lim_primes[i]-a];
				a=lim_primes[i];
			}
			for(it=list.begin();it!=list.end();it++)
				if(it->second==max){
					ans=it->first;
					flag++;
				}
			if(flag==1) printf("The jumping champion is %lld\n",ans);
			else printf("No jumping champion\n");
		}		
	}
	return 0;
}

