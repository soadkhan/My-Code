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
#include<Windows.h>
#include<MMsystem.h>
#include<dos.h>
#include<conio.h>
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

void q(){Beep(900,100);}
void w(){Beep(800,100);}
void e(){Beep(750,100);}
void r(){Beep(700,100);}
void t(){Beep(650,100);}
void y(){Beep(600,200);}
void u(){Beep(500,200);}
void i(){Beep(450,200);}
void o(){Beep(400,200);}
void p(){Beep(300,200);}

void a(){Beep(900,75);Beep(800,75);}
void s(){Beep(750,75);Beep(700,75);}
void d(){Beep(800,75);Beep(750,75);}
void f(){Beep(700,75);Beep(650,75);}
void g(){Beep(650,75);Beep(700,75);}
void h(){Beep(500,75);Beep(650,75);}
void j(){Beep(700,75);Beep(500,75);}
void k(){Beep(450,75);Beep(500,75);}
void l(){Beep(300,75);Beep(400,75);}

void z(){Beep(800,30);Beep(750,30);Beep(700,30);}
void x(){Beep(750,30);Beep(600,30);Beep(500,30);}
void c(){Beep(600,30);Beep(650,30);Beep(575,30);}
void v(){Beep(575,30);Beep(660,30);Beep(700,30);}
void b(){Beep(300,30);Beep(400,30);Beep(500,30);}
void n(){Beep(400,30);Beep(300,30);Beep(350,30);}
void m(){Beep(300,30);Beep(500,30);Beep(800,30);}


int main(void)
{
	char my;
	while(4){
		my=getch();
		if(my=='a') a();
		if(my=='b') b();
		if(my=='c') c();
		if(my=='d') d();
		if(my=='e') e();
		if(my=='f') f();
		if(my=='g') g();
		if(my=='h') h();
		if(my=='i') i();
		if(my=='j') j();
		if(my=='k') k();
		if(my=='l') l();
		if(my=='m') m();
		if(my=='n') n();
		if(my=='o') o();
		if(my=='p') p();
		if(my=='q') q();
		if(my=='r') r();
		if(my=='s') s();
		if(my=='t') t();
		if(my=='u') u();
		if(my=='v') v();
		if(my=='w') w();
		if(my=='x') x();
		if(my=='y') y();
		if(my=='z') z();
	}

	return 0;
}

