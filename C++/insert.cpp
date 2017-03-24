#include<bits/stdc++.h>
using namespace std;

void sort_str(string arry[],int n){
	for(int i=n-2;i>=0;i--)
		for(int j=0;j<=i;j++)
			if(arry[j]>arry[j+1]){
				string temp=arry[j];
				arry[j]=arry[j+1];
				arry[j+1]=temp;
			}
}


int lean_search(string arry[],string ele,int n){
	for(int i=0;i<n;i++)
		if(arry[i]==ele) return i;
	return -1;
}

int bin_search(string arry[],string ele,int n){
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(ele==arry[mid]) break;
		else if(ele>arry[mid]) low=mid+1;
		else high=mid-1; 
	}
	if(low<=high) return mid;
	else return -1;
}


void insert(string arry[],int &n,string ele,int loc){
	for(int i=n;i>=loc+1;i--)
	      arry[i]=arry[i-1];
	arry[loc]=ele;
	n++;
}

void delet(string arry[],int &n,int loc){
	for(int i=loc;i<=n-2;i++)
		arry[i]=arry[i+1];
	n--;
}


int find_pos_insert(string arry[],int n,string ele){
	for(int i=0;i<n;i++)
	    if(arry[i]>=ele) return i;
	return n-1;
}

int main(void)
{
	//freopen("uva.txt","rt",stdin);
    string arry[1000],ele;
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
		cin>>arry[i];
		
    cin>>ele;
    sort_str(arry,n);   
	insert(arry,n,ele,find_pos_insert(arry,n,ele));
//	delet(arry,n,1);
//    int pos=bin_search(arry,ele,n);
//   if(-1!=pos) 
//   	cout<<"found in"<<pos<<endl;
//   else cout<<"not found"<<endl;

	for(int i=0;i<n;i++)
		cout<<arry[i]<<endl;		
	
	return 0;
}

