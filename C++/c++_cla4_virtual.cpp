#include<iostream>
using namespace std;
                                                                                                                                                                       
class base{
public: 
	int i;
	void set(int m){i=m;}
	void display(){ cout<<i<<endl;}
};
class derived1:virtual public base{	
public:
	int j;
	void set_derived1(int l){j=l;}
	void display_derived1(){cout<<j<<endl;}
};
class derived2:virtual public base{
public:
	int k;
	void set_derived2(int n){k=n;}
	void display_derived2(){cout<<k<<endl;}
};
class derived3:public derived1,public derived2{	
public:
	int s;
};
int main(){
	derived3 ob;
	ob.set(10);
	ob.display();
	ob.set_derived1(20);
	ob.display_derived1();
	ob.set_derived2(30);
	ob.display_derived2();
		
	ob.s=ob.i+ob.j+ob.k;//if we don't use virtual then ob.it will be ambiguous ...
	cout<<ob.s<<endl;
	return 0;
}
