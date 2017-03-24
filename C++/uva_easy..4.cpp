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
long long int judge(long long int *p,long long int n)
 {
 	long long int i,j;
 	long long int temp,con=0;
 	for(i=n-2;i>=0;i--)
 	   {
 	   	   for(j=0;j<=i;j++)
 	   	   {
 	   	   	   if(*(p+j)>*(p+j+1))
 	   	   	   {
 	   	   	   	   temp=*(p+j+1);
 	   	   	   	   *(p+j+1)=*(p+j);
 	   	   	   	   *(p+j)=temp;
 	   	   	   	   con++;
 	   	   	   }
 	   	   }
 	   }
 	return con;
 }
int main(void)
{
   //freopen("uva.txt","rt",stdin);
	long long int n,ara[1010];
	while(cin>>n)
	{
		for(long long int i=0;i<n;i++) cin>>ara[i];
		cout<<"Minimum exchange operations : "<<judge(ara,n)<<endl;
	}
	return 0;
}

