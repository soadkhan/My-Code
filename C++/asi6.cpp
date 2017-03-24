#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>


using namespace std;

class stack{
	
	int ara[2000];
	int pos;
	
	public:
		
		stack()
		{
			pos=0;
		}
		
		void push(int i)
		{
			ara[pos]=i;
			pos++;
		}
		
		int pop()
		{
			if(pos==0)
			{
				cout<<"empty"<<endl;
				return 0;
			}
			pos--;
			return ara[pos];
			
		}
		
};


int main(void)
{
	//  freopen("uva.txt","rt",stdin);
	
	stack my;
	
	my.push(1);
	my.push(2);
	my.push(3);
	my.push(4);
	
	cout<<my.pop()<<endl;
	cout<<my.pop()<<endl;
	cout<<my.pop()<<endl;
	cout<<my.pop()<<endl;
	
	return 0;
}

