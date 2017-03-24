#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long double a;
	cin>>a;
	   long int b;
	   long double c;
	   b=(long int) a;
	   c=(long double) b;
	   if((a-c)>0)
	   {
	   	  cout<<0;
	   }
	   else
	   {
	   	   cout<<1;
	   }
	
	
	return 0;
}

