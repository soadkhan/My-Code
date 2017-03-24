#include<bits/stdc++.h>
using namespace std;
int sum_ar(int ar[],int n){
	int sum = 0;
	for(int i=0;i<n;i++)
		sum+=ar[i];
	return sum;
}
int max_ar(int ar[],int n){
	int max = ar[0];
	for(int i = 1;i<n;i++)
		if(ar[i]>max) max = ar[i];
	return max;
}
int min_ar(int ar[],int n){
	int min = ar[0];
	for(int i =1;i<n;i++)
		if(ar[i]<min) min = ar[i];
	return min;
}
double ave_ar(double ar[],int n){
	double sum = 0;
	for(int i=0;i<n;i++)
		sum+=ar[i];
	return (sum/(double)n);
}
int ser_lin(int ar[],int data,int n){// jodi  -1 ferot dey tahole khuje paoa jay ni ar na hole position ferot dibe
	for(int i=0;i<n;i++)
		if(ar[i]==data) return i;
	return -1;
}

int ser_lin_str(string ar[],string data,int n){// jodi  -1 ferot dey tahole khuje paoa jay ni ar na hole position ferot dibe
    for(int i=0;i<n;i++)
		if(ar[i]==data) return i;
	return -1;
}

void insert_pos(int ar[],int data,int pos,int &n){ // position dhore insert korar jonno amin n er jonno reference use korechi
	if(pos>n||pos<0) {
		cout <<" out of the array "<<endl;
		return;
	}
	for(int i = n;i> pos ; i--){
		ar[i] = ar[i-1];
	}
	ar[pos] = data;
	n++;
}
void insert_pos_str(string ar[],string data,int pos,int &n){ // n er jonno kintu reference use korechi .. tai main e ar
	if(pos>n||pos<0) {
		cout <<" out of the array "<<endl;
		return;
	}
	for(int i = n;i> pos ; i--){
		ar[i] = ar[i-1];
	}
	ar[pos] = data;
	n++;
}
void sort_int(int ar[],int n){
	for(int i=n-2;i>=0;i--)
		for(int j=0;j<=i;j++)
			if(ar[j]>ar[j+1]){
				int temp;
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] =  temp;
			}
}
void sort_str(string ar[],int n){ // bubble sorting for string
	for(int i=n-2;i>=0;i--)
		for(int j=0;j<=i;j++)
			if(ar[j]>ar[j+1]){
				string temp;
				temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] =  temp;
			}
}
void sorted_ins(int ar[],int data , int &n){ // ei function e insert_pos() use kora hoeche
	int find_pos;
	if(ar[n-1]<=data) find_pos = n;
	else {
		for(int i=0 ; i<n ;i++)
				if(ar[i]>=data) {
					find_pos = i;
					break;
				}
	}
	insert_pos(ar,data,find_pos,n);
}
void sorted_ins_str(string ar[],string data , int &n){ // ei function e insert_pos_str() use kora hoeche
	int find_pos;
	if(ar[n-1]<=data) find_pos = n;
	else {
		for(int i=0 ; i<n ;i++)
				if(ar[i]>=data) {
					find_pos = i;
					break;
				}
	}
	insert_pos_str(ar,data,find_pos,n);
}
void delete_pos(int ar[],int pos,int &n){ // ami n er reference use korechi positionj dhore delete
	if(n==0) cout<<"empty array"<<endl;
	else if(pos>n-1||pos<0){
		cout<<"out of the array"<<endl;
		return;
	}
	else{
		for(int i=pos;i<n-1;i++)
			ar[i]=ar[i+1];
	}
	n--;
}

void delete_pos_str(string ar[],int pos,int &n){ // ami n er reference use korechi positionm dhore delete for string
	if(n==0) cout<<"empty array"<<endl;
	else if(pos>n-1||pos<0){
		cout<<"out of the array"<<endl;
		return;
	}
	else{
		for(int i=pos;i<n-1;i++)
			ar[i]=ar[i+1];
	}
	n--;
}
void delete_sort(int ara[],int data,int &n){ // er majhe ser_lin() o delete_pos() use korechi
	if(ser_lin(ara,data,n)==-1){
		cout<<"not found"<<endl;
		return ;
	}
	else{
		while(ser_lin(ara,data,n)!=-1){
			int pos = ser_lin(ara,data,n);
			delete_pos(ara,pos,n);
		}
	}
}

void delete_sort_str(string ara[],string data,int &n){ // er majhe ser_lin_str() o delete_pos_str() use korechi
	if(ser_lin_str(ara,data,n)==-1){
		cout<<"not found"<<endl;
		return ;
	}
	else{
		while(ser_lin_str(ara,data,n)!=-1){
			int pos = ser_lin_str(ara,data,n);
			delete_pos_str(ara,pos,n);
		}
	}
}

int binary_ser(int ar[],int data,int n){// jodi  -1 ferot dey tahole khuje paoa jay ni ar na hole position ferot dibe
    int mid,high=n-1,low=0,pos=-1;
    while(low<=high){
        mid=(high+low)/2;
        if(ar[mid]==data){
            pos = mid;
            return pos;
        }
        else if(data<ar[mid])
            high = mid -1;
        else
            low = mid + 1;
    }
    return pos;
}

int binary_ser_str(string ar[],string data,int n){// jodi  -1 ferot dey tahole khuje paoa jay ni ar na hole position ferot dibe
    int mid,high=n-1,low=0,pos=-1;
    while(low<=high){
        mid=(high+low)/2;
        if(ar[mid]==data){
            pos = mid;
            return pos;
        }
        else if(data<ar[mid])
            high = mid -1;
        else
            low = mid + 1;
    }
    return pos;
}


int main(void){
    int ara[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ara[i];

    int data;
    cin>>data;

    delete_sort(ara,data,n);

    for(int i=0;i<n;i++)
        cout<<ara[i]<<" ";





	return 0;
}


