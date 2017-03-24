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
long long int gcd(long long int a,long long int b){if(a%b==0) return b;else return gcd(b,a%b);}
struct node{
	long int num;
	long int fre;
};

bool compare(node a,node b){
	if(a.fre<b.fre) return true;
	else if(a.fre>b.fre) return false;
	else {
		if(a.num>b.num) return true;
		else return false;
	}
}


int main(void)
{
	freopen("uva.txt","rt",stdin);
	map<long int ,long  int>list;
	map<long int ,long  int>::iterator it;
	string str;
	long int con=0;
	while(cin>>str){
		con++;
		if(con!=1) cout<<endl;
		struct node ary[10000];
		long int l=str.length();
		for(long int i=0;i<l;i++)
			list[str[i]]++;
		long int nu=0;
		for(it=list.begin();it!=list.end();it++){
			ary[nu].num=it->first;
			ary[nu].fre=it->second;
			nu++;
		}
		sort(ary,ary+nu,compare);
		for(long int i=0;i<nu;i++)
			cout<<ary[i].num<<" "<<ary[i].fre<<endl;
		list.clear();
	}
	
	
	return 0;
}

