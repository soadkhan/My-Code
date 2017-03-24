#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int *ara;
    int i;
    ara=&i;
    cin>>i;
    cout<<*(ara+1)<<endl;
    
    
	return 0;
}
