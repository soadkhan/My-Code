#include<iostream>

using namespace std;

class car{
	private:
	int price;
	public:
	void show_data(void);
	car(int a);
	~car();
};

void car::show_data(void){
	cout<<price<<" "<<price<<endl;
}

car::car(int a=10){
	price=a;
	cout<<"constructing"<<price<<endl;
}
car::~car(){
	cout<<"destrcting"<<price<<endl;
}

int main(){
	//car a(12),b(13),c(14);	
	//car ara[3]={1,2,3};
	//car spe; 
	return 0;
}
