#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int > a;
	for(int i=0;i<5;i++){
		int d;
		cin>>d;
		a.push_back(d);
	}
	a.clear();
	
	a.insert(a.begin(),5);
	
	
	
	
	int l= a.size();
	for(int i=0;i<l;i++){
		cout<<a[i]<<" ";
	}
	a[0];
	a.erase(a.begin());
	a.insert(a.begin(),5); 
	
		
	

	
	return 0;
}
