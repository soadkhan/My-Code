#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>
#include<vector>
using namespace std;
char str[110][110];
void go(int r,int c)
{
	 for(int i=0;i<r;i++)
	    	for(int j=0;j<c;j++)
	    		if(str[i][j]=='*')
	    		{
	    			if(i!=0&&str[i-1][j]!='*') str[i-1][j]++;
	    			if(j!=0&&str[i][j-1]!='*') str[i][j-1]++;
	    			if(i!=r-1&&str[i+1][j]!='*') str[i+1][j]++;
	    			if(j!=c-1&&str[i][j+1]!='*') str[i][j+1]++;
	    			if(i!=0&&j!=c-1&&str[i-1][j+1]!='*') str[i-1][j+1]++;
	    			if(i!=r-1&&j!=c-1&&str[i+1][j+1]!='*') str[i+1][j+1]++;
	    			if(i!=r-1&&j!=0&&str[i+1][j-1]!='*') str[i+1][j-1]++;
	    			if(i!=0&&j!=0&&str[i-1][j-1]!='*') str[i-1][j-1]++;
				}

		for(int i=0;i<r;i++){
	    	for(int j=0;j<c;j++){
	    	    if(str[i][j]!='*') printf("%d",str[i][j]-'.');
	    	    else cout<<str[i][j];
			}
			cout<<endl;
	    }
}
int main(void)
{
//	freopen("uva.txt","rt",stdin);
	long long int con=0;
	while(4)
	{
		con++;
		int r,c;
	    cin>>r>>c;
	    if(r==0&&c==0){
	    	if(con==1) cout<<endl;
	    	return 0;
	    }
	    getchar();
	    for(int i=0;i<r;i++)
	    	cin.getline(str[i],110);

	    if(con!=1)cout<<endl;
		cout<<"Field #"<<con<<':'<<endl;
	    go(r,c);
	}
	return 0;
}

