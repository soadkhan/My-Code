#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<10>bs;//boundary is the size ....... use in prime
vector<long long int>primes; // use in prime
typedef unsigned long long int ulld;
typedef long long int lld;
typedef long int ld;
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max_v(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min_v(long long int a,long long int  b){if(a<b ) return a;else return b;}
long long int gcd(long long int a,long long int b){if(a%b==0) return b;else return gcd(b,a%b);}
void sieve(long long int up){se_si=up+1;bs.set();bs[0]=0;bs[1]=0;for(long long int i=2;i<=se_si;i++)if(bs[i]){for(long long int j=i*i;j<=se_si;j+=i)bs[j]=0;primes.push_back(i);}}
bool is_prime(long long int n){if(n<=se_si)return bs[n];long long int l=primes.size();for(long long int i=0;i<l;i++)if(n%primes[i]==0)return false;return true;}

bool compare(char a,char b){
        if(a=='('&&b==')') return true;
        else if(a=='{'&&b=='}') return true;
        else if(a=='['&&b==']') return true;
        else return false;
}

int main(void)
{
	//freopen("uva.txt","rt",stdin);
	//freopen("uva_out.txt","wt",stdout);
        lld test;
        cin>>test;
        getchar();
        while(test--){
                string str;
                stack<char>st;
                getline(cin,str);
                lld l=str.length(),fl=1;
                for(lld i =0; i<l;i++){
                        if(str[i]=='('||str[i]=='{'||str[i]=='[')
                                st.push(str[i]);
                        else{
                                if(st.empty()){
                                        fl=0;
                                        break;
                                }
                                else if(compare(st.top(),str[i])) st.pop();
                                else{
                                        fl=0;
                                        break;
                                }
                        }
                }
                if(st.empty()!=true) fl=0;
                if(fl==0) printf("No\n");
                else printf("Yes\n");
        }
	return 0;
}

