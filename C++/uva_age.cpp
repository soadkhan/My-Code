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
	//freopen("uva.txt","rt",stdin);
	long long int test,con=0;
	cin>>test;
	while(test--)
	{
		long long int dn,db,mn,mb,yn,yb,agn,agb;
		con++;
		scanf("%lld/%lld/%lld",&dn,&mn,&yn);
		scanf("%lld/%lld/%lld",&db,&mb,&yb);
		agn=(dn)+(mn*30)+(yn*365);
		agb=(db)+(mb*30)+(yb*365);
		cout<<"Case #"<<con<<": ";
		if(agn<agb) cout<<"Invalid birth date"<<endl;
		else if(((agn-agb)/365)>130) cout<<"Check birth date"<<endl;
		else cout<<(agn-agb)/365<<endl;
	}
	return 0;
}

