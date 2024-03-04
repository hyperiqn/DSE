#include<iostream>
using namespace std;
class Stack{
    static const int maxsize = 10;
    int a[maxsize];
    int top;
    public:
    int peek(){
        return a[top];
    }
    void push(int x){
        if(top == maxsize-1){
            cout<<"overflow"<<endl;
            return;
        }
        a[++top] = x;
    }
    int pop(){
        if(top == -1){
            cout<<"underflow"<<endl;
        }
        else{
            int popped = a[top];
            a[top--] = 0;
            return popped;
        }
        
    }
    void display(){
        for(;top>=0;top--)
            cout<<a[top]<<"\t";
    }
};
int main(){
    Stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.display();
}