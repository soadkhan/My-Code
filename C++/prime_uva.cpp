#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<10000000>bs;//boundary is the size ....... use in prime
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
	primes.push_back(1);
	for(long long int i=2;i<=se_si;i++)
		 if(bs[i]){
		 	for(long long int j=i*i;j<=se_si;j+=i)
			 	 bs[j]=0;
		    primes.push_back(i);
		 }
}

long long int num_primes(long long int n){
	long long int i=0;
	while(primes[i]<=n){
	//	cout<<primes[i]<<endl;
		i++;
	}
	return i;
	
}

bool is_prime(long long int n){
	if(n<=se_si)
		 return bs[n];
	long long int len=(long long int)primes.size();
    for(long long int i=0;i<len;i++)
		if(n%primes[i]) 
			return false;
		return true;
}

int main(void)
{
	//freopen("uva.txt","rt",stdin);
	sieve(1100);
	//for(int i=0;i<12;i++) cout<<primes[i]<<" ";
	long long int n,c;
	while(cin>>n>>c){
		long long int lb,ub;
		printf("%lld %lld:",n,c);
		long long int siz=num_primes(n);
		//cout<<siz<<endl;
		if(2*c>=siz){
			lb=0;
			ub=siz-1;
		}
		else if(siz%2==0){
			lb=(siz/2)-c;
			ub=(siz/2)+c-1;
		}
		else if(siz%2==1){
			lb=(siz/2)-c+1;
			ub=(siz/2)+c-1;
		}
		for(long long int i=lb;i<=ub;i++) cout<<" "<<primes[i];
		cout<<endl<<endl;
		
	}


	return 0;
}

