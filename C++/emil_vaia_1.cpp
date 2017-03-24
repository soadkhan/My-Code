#include<bits/stdc++.h>
using namespace std;

class student_id{
private:
    char *name;
    int roll;
    int num;
public:
    student_id(){
        name=(char*)malloc(100*sizeof(char));
    }
    student_id(student_id& str);
    get(){
        cout<<"enter name :";
        cin>>name;
        cout<<"enter roll :";
        cin>>roll;
        cout<<"enter number";
        cin>>num;
    }
    show(){
        cout<<"Name : "<<name<<" Roll : "<<roll<<" Number : "<<num<<endl;
    }
};

student_id::student_id(student_id& str){  // copy constructor .
    name=(char*)malloc(100*sizeof(char)); //memory allocation
	strcpy(name,str.name); // copying value
	roll = str.roll;
	num = str.num;
}

int main(void){
    student_id ori;
    ori.get(); //data input system is here .
    student_id cpy = ori ;// copy constructor is used here , after the input .
    cout<<"Student details: "<<endl;
    ori.show();
    cout<<"Copy details: "<<endl;
    cpy.show();

    return 0;
}
