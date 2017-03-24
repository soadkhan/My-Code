#include<iostream>
using namespace std;

class car{
	public:
		int eng_effi;
		car operator ++();
};

car car::operator ++(){
	eng_effi++;
	return *this;
}

int main(){
	car one;
	one.eng_effi=100;
	++one;
 //   one++;
	cout<<one.eng_effi;
	return 0;
}
