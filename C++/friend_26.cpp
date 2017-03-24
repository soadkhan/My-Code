#include<iostream>
using namespace std;

class con;

class cor{
	int x,y;
	public:
		cor(int a=0,int b=0){
			x=a;
			y=b;
		}
		void show(void){
			cout<<x<<" "<<y<<endl;
		}
		friend cor operator + (cor a,con b);
		friend cor operator ++ (cor &a);

};

class con{
	int x,y;
	public:
		con(int a=0,int b=0){
			x=a;
			y=b;
		}
		void show(void){
			cout<<x<<" "<<y<<endl;
		}
		friend cor operator + (cor a,con b);
};

cor operator + (cor a,con b)
{
	cor temp;
	temp.x=a.x+b.x;
	temp.y=a.y+b.y;
	return temp;
}

cor operator ++(cor &a)
{
	++a.x;
	++a.y;
}

int main(void)
{
	cor a(1,2),c;
	con b(2,3);
	c=a+b;
	c.show();
	++c;
	c.show();
	return 0;
}
