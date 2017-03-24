#include<iostream>
using namespace std;
 class student_id{
 	public:
	int roll;
 	int marks;
 	void set_data(int a,int b){
 		roll=a;
		marks=b;		
 	}
 };
 
 void fun(student_id one){
 	cout<<one.roll<<" "<<one.marks<<endl;
 	one.set_data(2,90);
 }
 
 int main(void){
 	student_id my;
 	my.set_data(1,100);
 	fun(my);
    cout<<my.roll<<" "<<my.marks<<endl; 
 	return 0;
 }
