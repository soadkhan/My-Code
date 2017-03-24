#include<iostream>
using namespace std;

class secondclass; //prototype

class myclass{
	private:
		int id;
	public:
		void set_id(int a){
			id=a;
		}

	friend class secondclass; // declaring as a friend
};

class secondclass{
	public:
		void show(myclass a){
			cout<<a.id<<endl; // accessing in private data of car class
		}
};

int main(){
	 myclass my;
	 secondclass se;
	 my.set_id(12);
	 se.show(my);
	return 0;
}

