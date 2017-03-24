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
    long long int ar[100000];
    long long int a,con=0;
    while(cin>>a)
    {
    	con++;
    	ar[con-1]=a;
    	sort(ar,ar+con);
    	if(con%2==1){
    		long long int pos=((con+1)/2)-1;
    		cout<<ar[pos]<<endl;
    	}
    	else{
    		long long int pos1=(con/2)-1;
    		long long int pos2=pos1+1;
    		long long int ans=(ar[pos1]+ar[pos2])/2;
    		cout<<ans<<endl;
    	}
    }
	return 0;
}

