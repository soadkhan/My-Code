#include<iostream>
using namespace std;

class cow{
	static int num;
	public:
		void display_num(void){
			cout<<num<<endl;
		}
		cow(){
			num++;
		}
};

int cow:: num;

int main(void)
{
	cow one ,two[4];
	
	one.display_num();
	
	return 0;
}
