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
long long int max_v(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min_v(long long int a,long long int  b){if(a<b ) return a;else return b;}
void sieve(long long int up){se_si=up+1;bs.set();bs[0]=0;bs[1]=0;for(long long int i=2;i<=se_si;i++) if(bs[i]){for(long long int j=i*i;j<=se_si;j+=i) bs[i]=0;primes.push_back(i);}}
bool is_prime(long long int n){if(n<=se_si) return bs[n];for(long long int i=0;i<(long long int)primes.size();i++)if(n%primes[i]) return false;return true;}

long long int  dig(long long int a){
    switch(a){
    	case 0:
    		return 6;
			break; 
		case 1:
    		return 2;
			break; 
		case 2:
    		return 5;
			break; 
		case 3:
    		return 5;
			break; 
		case 4:
    		return 4;
			break; 
		case 5:
    		return 5;
			break; 
		case 6:
    		return 6;
			break; 
		case 7:
    		return 3;
			break; 
		case 8:
    		return 7;
			break; 
		case 9:
    		return 6;
			break; 
    }
	
}

long long int sum_seg(long long int a){
	long long int sum=0;
	if(a==0 ) sum=6;
	while(a!=0){
		sum+=dig(a%10);
		a/=10;
	} 
	return sum;
}

int main(void)
{
	//freopen("uva.txt","rt",stdin);
   long long int a,b,ans=0;
   cin>>a>>b;	
   for(long long int i=a;i<=b;i++){
   	 ans+=sum_seg(i);
   }
   cout<<ans<<endl;
	return 0;
}

