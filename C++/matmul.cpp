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
int main(void)
{
	//freopen("uva.txt","rt",stdin);
	int mat1[10][10],mat2[10][10],ans[10][10];
	int r1,c1,r2,c2;
	cin>>r1>>c1;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin>>mat1[i][j];
		}
	}

	cin>>r2>>c2;
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cin>>mat2[i][j];
		}
	}

	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			int sum=0;
			for(int k=0;k<c1;k++){
				sum+=mat1[i][k]*mat2[k][j];
			}
			ans[i][j]=sum;
		}
	}

	for(int i=0;i<r1;i++){
		for(int j=0;j<c2;j++){
			//cout<<ans[i][j]<<" ";
			printf("%d ",ans[i][j]);
		}
		cout<<endl;
	}

	return 0;
}


