#include<iostream>
using namespace std;
int fibo(int n){
    if((n==0)||(n==1))
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}
int main(){
    int i;
    for(i=0;i<40;i++){
        cout<<fibo(i)<<endl;
    }
}
