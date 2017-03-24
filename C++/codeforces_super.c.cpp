#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>
using namespace std;

long long int ara[100010];
long long int sor[100010];
long long int last;

int sufl=0;
int lastun(long long int a){
	if(ara[last-1]==a){
		last--;
		return 0;
		sufl=1;
	}
	else{
	  for(long long int i=0;i<last;i++){
	  	 if(ara[i]==a){
	  	 	ara[i]=-1;
	  	 	break;
	  	 }
	  }	
	  return -1;
	}
}

void go(void){
	int fl=0;
	for(long long int i=0;i<last;i++){
		if(ara[i]==-1){
			for(long long int j=i;j<last;j++){
				ara[j]=ara[j+1];
			}
			fl=1;
		}
	}
	if(fl==1) last--;
}

int main(void)
{
	 // freopen("uva.txt","rt",stdin);
	long long int n;
	cin>>n;
	last=n;
	for(long long int i=0;i<n;i++){
		cin>>ara[i];
		sor[i]=ara[i];
	}
	
	sort(sor,sor+n);
	
	long long int con=0;
	
	for(long long int i=n-1;i>=0;i--){
		sufl=0;
		if(-1==lastun(sor[i])) con++;
		if(sufl==0) go();
	}
	cout<<con<<endl;	
	return 0;
}

