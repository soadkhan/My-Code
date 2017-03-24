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
using namespace std;
long long int pw(long long int a,long long int b){long long int sum=1;for(long long int i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
int main(void)
{
   // freopen("uva.txt","rt",stdin);
	long long int test,sum,con=0;
	cin>>test;
	getchar();
	char  sr[200];
	while(test--){
		con++;
		sum=0;
		cin.getline(sr,150);
		long long int l=strlen(sr);
		for(long long int i=0;i<l;i++){
			if(sr[i]=='a'||sr[i]=='d'||sr[i]=='g'||sr[i]=='j'||sr[i]=='m'||sr[i]=='p'||sr[i]=='t'||sr[i]=='w'||sr[i]==' ') sum+=1;
			else if(sr[i]=='b'||sr[i]=='e'||sr[i]=='h'||sr[i]=='k'||sr[i]=='n'||sr[i]=='q'||sr[i]=='u'||sr[i]=='x') sum+=2;
			else if(sr[i]=='c'||sr[i]=='f'||sr[i]=='i'||sr[i]=='l'||sr[i]=='o'||sr[i]=='r'||sr[i]=='v'||sr[i]=='y') sum+=3;
			else if(sr[i]=='s'||sr[i]=='z') sum+=4;
		}
		printf("Case #%lld: %lld\n",con,sum);
	}
	return 0;
}

