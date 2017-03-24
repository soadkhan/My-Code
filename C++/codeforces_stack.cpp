#include<bits/stdc++.h>
using namespace std;
int main(void){
	//freopen("uva.txt","rt",stdin);
	stack< char >st;
    char str[200010];
    char c;
    while(cin>>c){
    	if(st.empty()==true||st.top()!=c) st.push(c);
    	else st.pop();
    }
    long int i=0;
    while(st.empty()!=true){
    	str[i]=st.top();
    	st.pop();
    	i++;
    }
    str[i]='\0';
    strrev(str);
    cout<<str<<endl;
	return 0;
}

