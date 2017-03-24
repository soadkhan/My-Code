#include<new>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<cstdio>
#include<cstdlib>
#include<bitset>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<10>bs;//boundary is the size ....... use in prime
vector<long long int>primes; // use in prime
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
void sieve(long long int up){se_si=up+1;bs.set();bs[0]=0;bs[1]=0;for(long long int i=2;i<=se_si;i++) if(bs[i]){for(long long int j=i*i;j<=se_si;j+=i) bs[i]=0;primes.push_back(i);}}
bool is_prime(long long int n){if(n<=se_si) return bs[n];for(long long int i=0;i<(long long int)primes.size();i++)if(n%primes[i]) return false;return true;}
int main(void)
{
	freopen("uva.txt","rt",stdin);
	long long int n;
	cin>>n;
	cout<<((n*n)+1)/2<<endl;
	long long int con=1;
	long long int fl=1;
	for(long long int i=1;i<=n;i++)
	{
		 for(long long int j=1;j<=n;j++)
	      {
	      	   if(fl%2==1){
	      	   	if(con%2==1) cout<<'C';
	      	     else cout<<'.';
	      	     con++;
	      	   }
	      	   else {
	      	   	if(con%2==0) cout<<'C';
	      	    else cout<<'.';
	      	    con++;
	      	   }
	      }
	    cout<<endl;
	    con=1;
	    fl++;
	}     
	  
	  
	return 0;
}

