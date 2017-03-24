
#include<bits/stdc++.h>
using namespace std;

struct rank{
	int marks;
	int penalty;
};

bool compare(rank a,rank b){
	if(a.marks>b.marks) return true;
	else if(a.marks<b.marks) return false;
	else {
		if(a.penalty<=b.penalty) return true;
		else return false; 
	}
}

int main(void){
	rank ara[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>ara[i].marks>>ara[i].penalty;
	sort(ara,ara+n,compare);
	for(int i=0;i<n;i++)
		cout<<ara[i].marks<<" "<<ara[i].penalty<<endl;
		
	return 0;
}
