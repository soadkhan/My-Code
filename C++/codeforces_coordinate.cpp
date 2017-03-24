#include<iostream>
using namespace std;
int main(void)
{
    int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	if(a==c)
	{
		a=a+d-b;
		c=c+d-b;
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
	}
	if(b==d)
	{
		
		b=b+c-a;
		d=d+c-a;
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
	}
	if((c-a)==(d-b)&&(d-b)>0)
	{
		
		b=b+c-a;
		d=d-(c-a);
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
	}
	if((c-a)==(d-b)&&(d-b)<0)
	{
		b=b-(a-c);
		d=d+(a-c);
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
	}
	if((c-a)==(b-d)&&(b-d)>0)
	{
		int temp=b;
		b=d;
		d=temp;
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;    
		
	}	
	if((c-a)==(b-d)&&(b-d)<0)
	{
		int temp=b;
		b=d;
		d=temp;
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
	}
	else{
		cout<<-1<<endl;
	}

}
