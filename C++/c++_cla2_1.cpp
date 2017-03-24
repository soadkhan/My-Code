#include<iostream>

using namespace std;

class myclass{
	public:
	//private:
	int num;
	int num1;
};

int main(){
	myclass m;
	cin>>m.num>>m.num1;
	cout<<m.num<<" "<<m.num1;	

	return 0;
}
