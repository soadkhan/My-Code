#include<iostream>

using namespace std;

class myclass{
	public:
	//private:
	int num;
	int num1;
	int show_data(void);
};

int myclass::show_data(void){
	cout<<num<<" "<<num1<<endl;
}

int main(){
	myclass m;
	cin>>m.num>>m.num1;
	//cout<<m.num<<" "<<m.num1;	
	m.show_data();
	return 0;
}
