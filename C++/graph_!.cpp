#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<10>bs;//boundary is the size ....... use in prime
vector<long long int>primes; // use in prime
typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;
long long int pw(long long int a,long long int b) {
    long long int sum=1;
    for(long long int i=0; i<b; i++) {
        sum*=a;
    }
    return sum;
}
long long int dif(long long int a,long long int b) {
    if(a>b) return (a-b);
    else return (b-a);
}
int strlen(string s) {
    int len = 0;
    while (s[len]) len++;
    return len;
}
long long int max_v(long long int a,long long int  b) {
    if(a>b ) return a;
    else return b;
}
long long int min_v(long long int a,long long int  b) {
    if(a<b ) return a;
    else return b;
}
long long int gcd(long long int a,long long int b) {
    if(a%b==0) return b;
    else return gcd(b,a%b);
}
void sieve(long long int up) {
    se_si=up+1;
    bs.set();
    bs[0]=0;
    bs[1]=0;
    for(long long int i=2; i<=se_si; i++)if(bs[i]) {
            for(long long int j=i*i; j<=se_si; j+=i)bs[j]=0;
            primes.push_back(i);
        }
}
bool is_prime(long long int n) {
    if(n<=se_si)return bs[n];
    long long int l=primes.size();
    for(long long int i=0; i<l; i++)if(n%primes[i]==0)return false;
    return true;
}

int main(void) {
   freopen("uva.txt","rt",stdin);
   // freopen("uva_out.txt","wt",stdout);
   vector<int>my_list[26];
   int visited[25];
   int a,node = 0;
   while(cin>>a){
        int adj;
		node++;
		for(int i=0;i<a;i++){
			cin>>adj;
			my_list[node].push_back(adj);
			my_list[adj].push_back(node);
		}		
		if(node==19){
			int n;
			cin>>n;
			int lo,de;
			for(int i=0;i<n;i++){
				cin>>lo>>de;
				cout<<lo<<" "<<de<<endl;
				for(int j=0;j<25;j++) // visited hoi nai keo
					visited[j] = -1;
				queue<int> qu;
				qu.push(lo);          //location ke push korlam 
				visited[lo] = 0;	  //er level 0
				int coun = 0;
				while(qu.empty()!=true){ // jotokhon na porjonto queue khali hobe process calie jabo  
					int parent  = qu.front();      // parent er man rakhlam 
					qu.pop();                      // shuru ke bad dialm;
					for(int k = 0;k<my_list[parent].size();k++){ // tar adjacent jara ache teder upor operation
						if(visited[my_list[parent][k]]==-1){    // jodi visited na hoy 
							qu.push(my_list[parent][k]);        // simply push koro
							visited[my_list[parent][k]] = visited[parent] + 1; // level ek barao
						}
						if(my_list[parent][k]==de){
							coun = visited[de];
							break;
						}
					}
					if(coun != 0) break;
				}
				cout<<coun<<endl;
			}			

		}	

   }
    return 0;
}

