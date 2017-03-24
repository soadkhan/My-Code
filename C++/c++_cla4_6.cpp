#include<iostream>
using namespace std;
class car{
	public:
		int tire;
		int seat;
};

class boat{
	public:
		int fan; 
};

class amphibi_car:public car,public boat{
	/*
	public:
		int tire;
		int seat;
	public:
		int fan; 
	*/
	public:
		int special;
};

int main(){
	
	amphibi_car my;
	cout<<"tire seats fans and special features"<<endl;
	cin>>my.tire>>my.seat>>my.fan>>my.special;
	cout<<my.tire<<' '<<my.seat<<' '<<my.fan<<' '<<my.special<<endl;
	return 0;
}
