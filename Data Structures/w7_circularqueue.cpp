#include<iostream>
using namespace std;
class CircularQueue{
    static const int max_size = 5;
    int arr[max_size];
    int front1;
    int rear;
    int ct;
public:
    CircularQueue(){
        front1 = 0;
        rear = 0;
        ct = 0;
    }
    void enqueue(int x){
        if(ct == max_size)
            cout<<"overflow"<<endl;
        else{
            arr[rear] = x;
            rear = (rear+1)%max_size;
            ct++;
        }
    }
    int dequeue(){
        if(ct <= 0)
            cout<<"underflow"<<endl;
        else{
            int dequeued = arr[front1];
            arr[front1] = 0;
            front1 = (front1+1)%max_size;
            ct--;
            return dequeued;
        }
    }
    void display(){
        int temp = front1;
        while(temp < rear){
            cout<<arr[temp]<<"\t";
            temp = (temp+1)%max_size;
        }
        cout<<endl;
    }
};
int main(){
    CircularQueue a;
    a.enqueue(1);
    a.enqueue(2);
    a.enqueue(3);
    a.enqueue(4);
    a.display();
    a.dequeue();
    a.dequeue();
    a.dequeue();
    a.display();
    a.dequeue();
    a.enqueue(1);
    a.display();
}
