#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int glo;
int  pr(char str[]){
	cout<<strlen(str);
	return 0;
}
bool fuck(void){
	cout<<"bal"<<endl;
	return true;
}
int main()
{
	char str[100];
	cin>>str;
	pr(str);
	return 0;
}
