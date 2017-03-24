#include<iostream>
using namespace std;

template <class X> X add(X a,X b){
	return (a+b);
}

template <class X> void sort (X a[],int n){
	int i,j;
 	X temp;
 	for(i=n-2;i>=0;i--){
 	   	for(j=0;j<=i;j++){
 	   	    if(*(a+j)<*(a+j+1)){
 	   	   	   	temp=*(a+j+1);
 	   	   	   	*(a+j+1)=*(a+j);
 	   	   	   	*(a+j)=temp;
 	   	   	}
 	   	}
 	}
}

int main(void){
	//cout<<add(1,2)<<endl;
	//cout<<add(12.5,13.6);
	int ara[100],n;
	cin>>n;
	
	
	for(int i=0;i<n;i++)
		cin>>ara[i];
		
		
	sort(ara,n);
	
	
	for(int i=0;i<n;i++)
		cout<<ara[i]<<" ";
		
		
	float araf[100],n1;
	cin>>n1;
	
	
	for(int i=0;i<n1;i++)
		cin>>araf[i];
		
	sort(araf,n1);
	
	
	for(int i=0;i<n1;i++)
		cout<<araf[i]<<" ";
	return 0;
}
































