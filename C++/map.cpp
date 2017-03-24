#include<iostream>
#include<map>

using namespace std;

int main(void)
{
	map<string , int> go;
    
    go.insert(pair<string,int>("soad",3));
	go.insert(pair<string,int>("khan",5));
    go.insert(pair<string,int>("joni",7));
    go.insert(pair<string,int>("hasan",9));
    
    
    
    cout<<go.size();
		
	return 0;
}
