#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<math.h>
#include<stdlib.h>
#include<new>

using namespace std;

class myclass{
	int a;
	public:
		myclass(int b)
		{
			a=b;
			cout<<"constructing"<<" "<<a<<endl;
		}
		~myclass()
		{
			cout<<"destrusting"<<" "<<a<<endl;
		}
	
};


void func(void)
{
   myclass jony(100);
}



int main(void)
{
	func();
	
   	myclass cow(12),co(13);
   	
   	func();
   	
	return 0;
}

