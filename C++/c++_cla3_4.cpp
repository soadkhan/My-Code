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
	student_id amar,tumar;
	strcpy(amar.name,"khan");
	strcpy(tumar.name,"tousif");
	cout<<tumar.name<<" "<<amar.name<<endl;
	student_id temp=tumar;
	amar=temp;
	cout<<tumar.name<<" "<<amar.name<<endl;
	strcpy(tumar.name,"mohammod");
	cout<<tumar.name<<" "<<amar.name<<endl;// problem  rises here
	return 0;
} 
