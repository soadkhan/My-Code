#include<iostream>
using namespace std;

class cow;
class goat;

class cow{
	
	int milkc;
	public:
		void setc(void){
			cin>>milkc;
		}
		void displayc(void){
			cout<<"milk of cow is : "<<milkc<<endl;
		}
	
	friend int sum(cow a,goat b);
	
	
};

class goat{
	
	int milkg;
	public:
		void setg(void){
			cin>>milkg;
		}
		void displayg(void){
			cout<<"milk of goat is : "<<milkg<<endl;
		}
	
	friend int sum(cow a,goat b);	
	
	
};


int sum(cow a,goat b)
{
    return(a.milkc+b.milkg);	
}


int main(void)
{
	cow a;
	goat b;
	
	a.setc();
	a.displayc();
	b.setg();
	b.displayg();
	
	cout<<sum(a,b)<<endl;
	
	return 0;
}
