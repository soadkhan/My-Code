#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
	char str[100];
	int l;
	int ara[15]={0};
	cin>>l;
	getchar();

	gets(str);

	

    for(int i=0;i<l;i++)
    {
    	if((str[i]-48)==4)
    	{
    		ara[3]++;
    		ara[2]+=2;
    	}
    	if((str[i]-48)==6)
    	{
    		ara[5]++;
    		ara[3]++;
    	}
    	if((str[i]-48)==8)
    	{
    		ara[7]++;
    		ara[2]+=3;
    	}
    	if((str[i]-48)==9)
    	{
    		ara[7]++;
    		ara[3]+=2;
    		ara[2]++;
    	}
    	
        if((str[i]-48)!=4&&(str[i]-48)!=6&&(str[i]-48)!=8&&(str[i]-48)!=9)
    	{
    	  ara[str[i]-48]++;
    
        }
    }
 
    for(int i=9;i>=2;i--)
    {
    	for(int j=0;j<ara[i];j++)
    	{
    		cout<<i;
    	}
    }
		
	
		cout<<endl;
	return 0;
}
