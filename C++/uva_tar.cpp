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
	//  freopen("uva.txt","rt",stdin); 
	long long int ara1[40010];
	long long int ara2[40010];
	long long int n,m,con=0;
	while(4)
	{
		con++;
		cin>>n>>m;
		if(n==0&&m==0){
			if(con==1) cout<<endl;
			return 0;
		}
		long long int j=0,k=0;
		for(long long int i=0;i<n;i++)
		{
			long long int a ;
			cin>>a;
			if(a==9){
				ara1[j]=7;
				ara1[++j]=3;
				ara1[++j]=3;
				ara1[++j]=2;
				++j;
			}
			if(a==8){
				ara1[j]=7;
				ara1[++j]=2;
				ara1[++j]=2;
				ara1[++j]=2;
				++j;
			}
			if(a==6){
				ara1[j]=5;
				ara1[++j]=3;
				++j;
			}
			if(a==4){
				ara1[j]=3;
				ara1[++j]=2;
				ara1[++j]=2;
				j++;
			}
			else {
				ara1[j]=a;
				++j;
			}
		}
		
		for(long long int i=0;i<m;i++)
		{
			long long int a ;
			cin>>a;
			if(a==9){
				ara2[k]=7;
				ara2[++k]=3;
				ara2[++k]=3;
				ara2[++k]=2;
				++k;
			}
			if(a==8){
				ara2[k]=7;
				ara2[++k]=2;
				ara2[++k]=2;
				ara2[++k]=2;
				++k;
			}
			if(a==6){
				ara2[k]=5;
				ara2[++k]=3;
				++j;
			}
			if(a==4){
				ara2[k]=3;
				ara2[++k]=2;
				ara2[++j]=2;
				j++;
			}
			else {
				ara1[j]=a;
				++j;
			}
		}
		
	}
	
    	


	
	return 0;
}

