#include<iostream>

using namespace std;
class coor{
		int x,y;
	public:
		coor(int a=0,int b=0){ x=a ; y=b;} 
	 	void show(void){
	 		cout<<x<<" "<<y<<endl;
	 	}
 	    coor operator + (coor X);
 	    coor operator + ();
}; 

coor coor::operator + (coor X)
{
	coor temp;
	temp.x=X.x + x;
	temp.y=X.y + y;
	return temp; 
}

coor coor::operator + ()
{
	if(x<0) x*=-1;
	if(y<0) y*=-1;
	return*this; 
}


int main(void)
{
	coor a(1,2),b(-2,-3),c;
	c=a+b;
	c.show();
	+b;
	b.show();
	return 0;
}
