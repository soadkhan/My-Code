#include <iostream>
using namespace std;
int max_v = 100;
class Queue {
public:
    int fron,rear;
    int *a ;
    Queue() {
        a = new int[max_v];
        fron = -1;
        rear = -1;
    }
    void Push (int val) {
        if(((rear+1)%max_v)==fron) {
            cout<<endl<<"Overflow"<<endl<<endl;
        }
        else if(fron==-1 && rear==-1) {
            rear = 0;
            fron = 0;
        }
        else {
            rear = (rear+1)%max_v;
        }
        a[rear] = val;
    }
    int Pop() {
        if(fron==-1 && rear==-1) {
            cout<<endl<<"Underflow"<<endl<<endl;
            return -1;
        }
        else if(fron==rear) {
            fron=rear=-1;
            return a[fron];
        }
        else {
            if(fron==max_v-1) {
                fron = -1;
            }
            fron = (fron+1)%max_v;
            return a[fron];
        }
    }
    int Front() {
        if(fron!=-1)
            return a[fron];
        cout<<"empty :( "<<endl;
        return -1;
    }
    void display() {
        int k=fron;
        if(fron == -1) return;
        else if(fron==rear) cout<<a[fron]<<endl;
        else {
            do {
                cout<<a[k]<<" ";
                k = (k+1)%max_v;
            } while(k!=rear);
            cout<<a[k]<<endl;
        }
    }
};
int main()
{
    Queue my;
    int data,n;
    cin>>n;
    while(n--) {
        cin>>data;
        my.Push(data);
    }
    my.display();
    my.Pop();s
    my.display();
    my.Pop();
    my.display();
    my.Push(12);
    my.display();
    my.Push(13);
    my.display();
    return 0;
}
