#include<iostream>
using namespace std;

class c{
	int x,y;
public:
	c(){}
	c(int i,int j){x=i; y=j;}
	c operator+(c ob);
	c operator+();
	void show(){cout<<x<<" "<<y<<endl;}
};
c c::operator+(c ob){
	c tmp;
	tmp.x=x+ob.x;
	tmp.y=y+ob.y;
	return tmp;
}
c c::operator+(){
	c tmp;
	if(x<0){
		tmp.x=-x;
	}
	if(y<0){
		tmp.y=-y;
	}
	return tmp;
}
int main(){
	c ob1(2,3),ob2(4,5),ob3,ob4(-3,-5);
	ob1.show();
	ob2.show();
	ob3=ob1+ob2;  // + using as binary operator
	ob3.show();
	ob3=+ob4;     // + using as unary operator
	
	ob3.show();
	return 0;
}
