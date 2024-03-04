#include<iostream>
using namespace std;
int main(){
    int a[50];
    int n,ct,i,j,c,m,mpos,flag=1;
    cout<<"enter number: ";
    cin>>n;
    c=n;
    ct=0;
    m=c%10;
    mpos=0;
    if(n<10)
        flag=0;
    while(c>0){
        a[ct]=c%10;
        if(m<a[ct]){
            m=a[ct];
            mpos=ct;
        }
        c/=10;
        ct++;
    }
    for(i=0;i<ct/2;i++){
        a[i]=a[ct-i-1];
    }
    for(i=0;i<mpos;i++){
        if(a[i]>a[i+1]){
            flag=0;
            break;
        }
    }
    for(j=ct-1;j>mpos;j--){
        if(a[j]<a[j+1]){
            flag=0;
            break;
        }
    }
    if(flag)
        cout<<"hill number";
    else
        cout<<"not hill number";

}
