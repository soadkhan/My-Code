#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<10>bs;//boundary is the size ....... use in prime
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
	long int com,con=0;
	double a,b,c,ans1,ans2;
	while(cin>>com){
		if(com==0) break;
		con++;
		cin>>a>>b>>c;
		if(com==1){
			ans1=((a+b)/2)*c;
			ans2=(b-a)/c;
		}
		else if(com==2){
			ans1=((b+a)*(b-a))/(2*c);
			ans2=(b-a)/c;
		}
		else if(com==3){
			ans1=sqrt((a*a)+(2*b*c));
			ans2=(ans1-a)/b;
		}
		else if(com==4){
			ans1=sqrt((a*a)-(2*b*c));
			ans2=(2*c)/(ans1+a);
		}
		printf("Case %ld: %.3lf %.3lf\n",con,ans1,ans2);
	}
	return 0;
}

