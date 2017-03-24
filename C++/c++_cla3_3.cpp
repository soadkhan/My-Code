  #include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class student_id{
 	public:
		char *name;
		student_id(){
			name=(char*)malloc(100*sizeof(char));
		}
		student_id(student_id& str);
};

student_id::student_id(student_id& str){
	name=(char*)malloc(100*sizeof(char));
	strcpy(name,str.name);
}

int main(){
	student_id amar;
	strcpy(amar.name,"khan");
	cout<<amar.name<<endl;
	student_id tumar=amar;   //used
	cout<<tumar.name<<" "<<amar.name<<endl; 
	strcpy(tumar.name,"mohammod");
	cout<<tumar.name<<" "<<amar.name<<endl;// problem  is solved
	return 0;
} 
