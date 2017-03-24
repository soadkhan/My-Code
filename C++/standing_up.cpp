#include<iostream>
using namespace std;

class box{
	private:
		int sp;
		int l;
		int w;
		int h;
	public:
        int vol();
        void get(int i,int j,int k);
        void getsp(int i);
};

void box::getsp(int i)
{
	sp=i;
}


void box::get(int i,int j,int k)
{
	l=i;
	w=j;
	h=k;
}


int box::vol()
    {
	    return l*w*h*sp;
	}	
	
int main()
{
	int i,j,k;
	box obj,special;
	special.getsp(6);
	cin>>i>>j>>k;
//	cin>>obj.l>>obj.w>>obj.h;
    special.get(i,j,k);
 	cout<<special.vol()<<endl;
	
	return 0;
}
