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
double pw(double a,double b){double sum=1;for(double i=0;i<b;i++){sum*=a;}return sum;}
long long int dif(long long int a,long long int b){if(a>b) return (a-b);else return (b-a);}
int strlen(string s){int len = 0;while (s[len]) len++;return len;}
long long int max(long long int a,long long int  b){if(a>b ) return a;else return b;}
long long int min(long long int a,long long int  b){if(a<b ) return a;else return b;}
int main(void)
{
	//freopen("uva.txt","rt",stdin);
	long int test;
	double l,w,r,pi=acos(-1);
	cin>>test;
	if(test==0){
		cout<<endl;
		return 0;
	}
	while(test--){
		cin>>l;
		w=(6*l)/10;
		r=(2*l)/10;
		double ar=pi*pw(r,2);
		printf("%.2lf %.2lf\n",ar,(l*w)-ar);	
	}
	return 0;
}

