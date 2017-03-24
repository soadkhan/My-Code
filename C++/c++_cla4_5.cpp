#include<iostream>
using namespace std;
 class car{
 	public:
 		int tire;
 		int lights;
 };
 
 class bus:public car{
 	/*
	 	public:
 		int tire;
 		int lights;
	*/
 	public:
 		int seats;
 };
 
 class truck:public car{
 	/*
	 	public:
 		int tire;
 		int lights;
	 */
	 public:
 		int load;
 };
 
 
 int main(){
 	bus my;
 	cout<<"tires lights and seats "<<endl;
 	cin>>my.tire>>my.lights>>my.seats;
 	cout<<my.tire<<" "<<my.lights<<" "<<my.seats<<endl;
 	truck yours;
 	cout<<"tires lights and load"<<endl;
 	cin>>yours.tire>>yours.lights>>yours.load;
 	cout<<yours.tire<<" "<<yours.lights<<" "<<yours.load<<endl;
 	return 0;
 }
 
 
 
