#include<iostream>
using namespace std;
class Stack{
    static const int maxsize = 3;
    int a[maxsize];
    int top;
    public:
    Stack(){
        top = 0;
    }
    int peek(){
        return a[top];
    }
    void push(int x){
        if(top == maxsize){
            cout<<"overflow"<<endl;
            return;
        }
        a[top++] = x;
    }
    int pop(){
        if(top == 0){
            cout<<"underflow"<<endl;
        }
        else{
            int popped = a[top-1];
            a[top-1] = 0;
            top--;
            return popped;
        }

    }
    void display(){
        int temp = top-1;
        for(;temp>=0;temp--)
            cout<<a[temp]<<"\t";
        cout<<endl;
    }
};
int main(){
    Stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.display();
    a.pop();
    a.display();
    a.pop();
    a.pop();
    a.pop();
}
