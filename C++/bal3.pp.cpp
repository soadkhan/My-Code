
#include<bits/stdc++.h>
using namespace std;

int main()
{
	 freopen("uva.txt","rt",stdin);

int x,i;
string s;
while(cin>>x)
    {
    for(i=0;i<x;i++)
        {
        cin>>s;
        if(s=="1" || s=="4" || s=="78") cout<<"+"<<endl;
        else if(s[s.length()-1]=='5' && s[s.length()-2]=='3') cout<<"-"<<endl;
        else if(s[s.length()-1]=='4' && s[0]=='9') cout<<"*"<<endl;
        else if(s[0]=='1' && s[1]=='9' && s[2]=='0') cout<<"?"<<endl;
        }
    }
return 0;
}
