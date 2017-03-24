#include<iostream>
using namespace std;
unsigned long long int power(unsigned long long int i)
{
	unsigned long long int pro=1;
	if(i==0)
	{
		return 1;
	}
           	
	else
	{
	    for(unsigned long long int k=0;k<i;k++)
		{
			pro=pro*10;
		}
		
	}
	return pro;
}

int main(void)
{
	unsigned long long int n,k,lim,a,i,arra[30][2];
	int fl=0;
	cin>>n>>k;
	
	lim=n-k;
//	cout<<"limit is = "<<lim<<endl;
    
    for(i=1;;i++)
	{
		if(n==(n%power(i)))
		{
			break;
		}
	
	}	
	arra[0][0]=n;
	arra[0][1]=0;
	unsigned long long int m;
	
	for(m=1;m<=i-1;m++)
	{
		fl=0;
		if ( ( (( n%power(m) ) -  ( n%power(m-1) ) )/power(m-1)  )==9)
		{
			a=n;
			goto m1;
		}
		
		if((m+1)<=i-1)
		{
		    if ( ( (( n%power(m+1) ) -  ( n%power(m) ) )/power(m)  )==9)
		    {
			    fl=1;   
			    goto n;
		    }
	    }
	    
		n:;
		
		 a=n-( ( ( n%power(m) ) -  ( n%power(m-1) ) )+(1* power(m-1) ) );
		 
	    
		 
		 m1:;
		 if(a<lim)
		 {
		 	break;
		 }
         
//		 cout<<"a = "<<a<<" "<<fl<<" "<<m<<endl;
		 arra[m][0]=a;
		 arra[m][1]=fl;
		 
		 
		 
		 n=a;
		 	
	}
	
//	cout<<m<<endl;
	m=(int)m;
//    cout<<m<<endl;	
	for(m=m-1;m>=0;m--)
	{
		
	    
	    {
	    	cout<<arra[m][0]<<endl;
	    	break;
	    }
		
        if(m==1)
        { 
        	break;
        }
		
	}
	
	//cout<<n<<endl;
	return 0;
	
	
	return 0;
}
