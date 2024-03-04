#include<iostream>
using namespace std;
int main(){
    int a,b,sum1=0,sum2=0,i;
    cout<<"enter numbers: ";
    cin>>a>>b;
    for(i=1;i<a;i++){
        if(a%i==0)
            sum1+=i;
    }
    for(i=1;i<b;i++){
        if(b%i==0)
            sum2+=i;
    }
    if((sum1==b)&&(sum2==a))
        cout<<"they are amicable numbers";
    else
        cout<<"not amicable numbers";
}
