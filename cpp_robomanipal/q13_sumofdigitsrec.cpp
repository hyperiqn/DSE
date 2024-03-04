#include<iostream>
using namespace std;
int sumrec(int n){
    int sum=0;
    if(n==0){
        return n;
    }
    else
        return n%10+sumrec(n/10);
}
int main(){
    int n,c,sum=0;
    cout<<"enter number: "<<endl;
    cin>>n;
    c=n;
    while(c>0){
        sum+=c%10;
        c=c/10;
    }
    cout<<sum<<endl;
    cout<<sumrec(n);
}
