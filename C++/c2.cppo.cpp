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
	freopen("uva.txt","rt",stdin);
     map<long long int , string>list_for;
     map<long long int , string>list_bac;
     map<long long int , string>::iterator it;
     list_for[1]="SATURDAY";
     list_for[2]="SUNDAY";
     list_for[3]="MONDAY";
     list_for[4]="TUESDAY";
     list_for[5]="WEDNESDAY";
     list_for[6]="THURSDAY";
     list_for[7]="FRIDAY";
     
     
     list_bac[1]="FRIDAY";
     list_bac[2]="THURSDAY";
     list_bac[3]="WEDNESDAY";
     list_bac[4]="TUESDAY";
     list_bac[5]="MONDAY";
     list_bac[6]="SUNDAY";
     list_bac[7]="SATURDAY";
     long long int con=0,test,x,y,ans,ab;
     string day;
     cin>>test;
     while(test--)
     {
     	con++;
     	cin>>x>>y>>day;
     	if(x==y) cout<<"Case"<<" "<<con<<": "<<day<<endl;
     	else if(x<y){
     		long long int k;
     		for(it=list_for.begin();it!=list_for.end();it++)
     		     if(it->second==day) k=it->first;
     		
     		ans=y-x+k;
     		ans=ans%7;
     		cout<<"Case"<<" "<<con<<": "<<list_for[ans]<<endl;
     		
     	}
     	else if(x>y){
     		long long int k;
     		for(it=list_bac.begin();it!=list_bac.end();it++)
     		     if(it->second==day) k=it->first;
     		
     		ans=x-y+k;
     		ans=ans%7;
     		cout<<"Case"<<" "<<con<<": "<<list_bac[ans]<<endl;
     	}
     }
	return 0;
}

