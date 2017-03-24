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
#include<bitset>
using namespace std;
int main(void)
{
    //freopen("uva.txt","rt",stdin);
     string str;
     long long int con=0;
     while(cin>>str)
     {
     	if(str=="#")
     	{
     		return 0;
     	}
     	con++;
     	if(con!=1) cout<<endl;
     	
     	long int up=0,dn=0,no=0,am=0;
     	long int l=str.length(),i;
		 for(i=0;i<l;i++)
		 {
		 	 if(str[i]=='.') break;
		 }
		 for(long long int j=i+1;j<str.length();j++)
		 {
		 	if(str[j]=='1'||str[j]=='2'||str[j]=='3'||str[j]=='4') dn++;
		 	else if(str[j]=='0') no++;
		 	else up++;
		 }
		 /*
		 int is_am=0;
		 for(int k=str.length()-1;k>i;k--)
		 {
		 	if(str[k]=='0') continue;
		 	else if(str[k]=='5'){
		 		is_am=1;
		 		break;
		 	}
		 	else break;
		 }
		 if(is_am==1){
		 	am++;
		 	up--;
		 }
		 */
		 printf("Case %d:\n",con);
		 printf("ROUND UP: %d\nROUND DOWN: %d\nNO CHANGE: %d\nAMBIGUOUS: %d\n",up,dn,no,am);
		 
     }
    
	return 0;
}

