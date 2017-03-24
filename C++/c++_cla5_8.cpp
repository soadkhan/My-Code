#include<iostream>
using namespace std;

class car{
	public:
		int eng_effi;
		friend car operator + (car a,car b);
		friend car operator ++(car &a);
};

car operator + (car a,car b){
	car temp;
	temp.eng_effi=a.eng_effi+b.eng_effi;
	return temp;
}

car operator ++(car &a){
	a.eng_effi++;
	return a;
}

int main(void){
	car one,other;
	one.eng_effi=100;
	other.eng_effi=200;
	car new_one;
	new_one = one + other;
	cout<<new_one.eng_effi<<endl;
	++new_one;
	cout<<new_one.eng_effi<<endl;	
	return 0;
}



