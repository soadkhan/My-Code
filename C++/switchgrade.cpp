#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int sc;
	cin>>sc;
	sc/=10;
	switch(sc){
		case 10:
		case 9:
		case 8:
			cout<<"A+"<<endl;
			break;
		case 7:
			cout<<"A"<<endl;
			break;
		case 6:
			cout<<"A-"<<endl;
			break;
		case 5:
			cout<<"B"<<endl;
			break;
		default:
			cout<<"fail"<<endl;
	}
	return 0;
}
