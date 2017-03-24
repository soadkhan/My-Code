#include <iostream> 
#include <map> 
using namespace std; 
int main()
{
///freopen("uva.txt","rt",stdin);
  int i,a;
  map <int,int>arr; 
  i = 0;
  while(cin >> a)
  {
  	  arr[i]=a;
  	  i++; 
  } 
  map<int,int>::iterator it;
  for(it=arr.begin(); it!=arr.end(); it++){
	  cout <<it->first << " " << it->second <<endl; 
  }
  return 0; 
}
