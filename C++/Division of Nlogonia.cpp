#include<iostream>
#include<cstdio>
//#include<algorithm>
//#include<cstring>


using namespace std;


int main(void)
{
//	freopen("uva.txt","rt",stdin);
	
	long long int test,n,m,x,y,fl=0;
	while(4)
	{
		cin>>test;
		if(test==0&&fl==0)
		{
		     cout<<endl;
			return 0;
		} 
		if(test==0&&fl==1)
		{
			return 0;
		} 
		fl=1;
		cin>>n>>m;
		
		for(long long int i=0;i<test;i++)
		{
			cin>>x>>y;
			
			if(x==n||y==m) cout<<"divisa"<<endl;
			
			if(x<n && y>m) 
			{
					cout<<"NO"<<endl;
					continue;
			}
		
			
			if(x>n && y>m )
			{
					cout<<"NE"<<endl;
					continue;
			} 
			
			if(x>n && y<m)
			{
			        cout<<"SE"<<endl;
			        continue;
		    }
			if(x<n && y<m)
			{
			
					 cout<<"SO"<<endl;
					 continue;
			}
		}
	}
	
	return 0;
}

