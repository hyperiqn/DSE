#include<iostream>
using namespace std;
class Queue{
    static const int max_size = 3;
    int arr[max_size];
    int front1;
    int rear;
public:
    Queue(){
        front1 = 0;
        rear = 0;
    }
    void enqueue(int x){
        if(rear == max_size)
            cout<<"overflow"<<endl;
        else
            arr[rear++] = x;
    }
    int dequeue(){
        if(front1 == rear)
            cout<<"underflow"<<endl;
        else
            arr[front1++] = 0;
    }
    void display(){
        int temp = front1;
        while(temp<rear){
            cout<<arr[temp]<<"\t";
            temp++;
        }
        cout<<endl;
    }
};
int main(){
    Queue a;
    a.enqueue(1);
    a.enqueue(2);
    a.enqueue(3);
    a.enqueue(4);
    a.display();
    a.dequeue();
    a.display();
    a.dequeue();
    a.dequeue();
    a.dequeue();
}
