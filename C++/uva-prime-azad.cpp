#include<bits/stdc++.h>
using namespace std;// third parameter of sort ..... jei operator er jonno true sevabe kaj korbe .... sekhane caile condition lagano jabe ....
long long int se_si;
bitset<1000>bs;//boundary is the size ....... use in prime
vector<unsigned long long int>primes; // use in prime
long long int pw(long long int a,long long int b)
{
    long long int sum=1;
    for(long long int i=0; i<b; i++)
    {
        sum*=a;
    }
    return sum;
}
long long int dif(long long int a,long long int b)
{
    if(a>b) return (a-b);
    else return (b-a);
}
int strlen(string s)
{
    int len = 0;
    while (s[len]) len++;
    return len;
}
long long int max_v(long long int a,long long int  b)
{
    if(a>b ) return a;
    else return b;
}
long long int min_v(long long int a,long long int  b)
{
    if(a<b ) return a;
    else return b;
}

void sieve(unsigned long long int up)
{
    se_si=up+1;
    bs.set();
    bs[0]=0;
    bs[1]=0;
    for(unsigned long long int i=2; i<=se_si; i++)
        if(bs[i])
        {
            for(unsigned long long int j=i*i; j<=se_si; j+=i) bs[j]=0;
            primes.push_back(i);
        }
}

bool is_prime(unsigned long long int n)
{
    if(n<=se_si) return bs[n];
    for(unsigned long long int i=0; i<(unsigned long long int)primes.size(); i++)
        if(n%primes[i]) return false;
    return true;
}

bool ch(unsigned long long int i)
{
    if(i==2) return true;
    else if(i==3) return true;
    else if(i==5) return true;
    else if(i==7) return true;
    else if(i==13) return true;
    else if(i==17) return true;
    else if(i==19) return true;
    else if(i==31) return true;
    else return false;
}

long long int gcd(long long int a,long long int b)
{
    if(a%b==0) return b;
    else return gcd(b,a%b);
}
int main(void)
{
//	freopen("uva.txt","rt",stdin);
    sieve(100);
//	2, 3, 5, 7, 13, 17, 19, 31,
//	unsigned long long int a=31,b;
//	b=pow(2,a-1)*(pow(2,a)-1);
//	cout<<b;
    unsigned long long int n,b;
    while(cin>>n)
    {
        if(n==0) break;
        if(is_prime(n))
        {
            b=pow(2,n-1)*(pow(2,n)-1);
            if(ch(n)) printf("Perfect: %llu!\n",b);
            else printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else
        {
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }
    return 0;
}

