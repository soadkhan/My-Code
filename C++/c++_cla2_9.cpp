#include<iostream>
using namespace std;
class my{
	public :
		static int data;
		static void show_data(){
			cout<<data<<endl;
		}
};

int my::data;//define static veriable

int main(){
cin>>my::data;
my::show_data();
	return 0;
}
