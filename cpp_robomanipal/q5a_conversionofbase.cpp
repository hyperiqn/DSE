#include<iostream>
using namespace std;
int main(){
    int a,c,bin[50],oct[50],hex[50],n=0,o=0,p=0,i;
    cout<<"enter number in decimal: ";
    cin>>a;
    c=a;
    cout<<"binary:";
    while(c>0){
        bin[n]=c%2;
        c/=2;
        n++;
    }
    for(i=n-1;i>=0;i--){
        cout<<bin[i];
    }
    cout<<"\noctal:";
    c=a;
    while(c>0){
        oct[o]=c%8;
        c/=8;
        o++;
    }
    for(i=o-1;i>=0;i--){
        cout<<oct[i];
    }
    cout<<"\nhexadecimal:";
    c=a;
    while(c>0){
        hex[p]=c%16;
        c/=16;
        p++;

    }
    for(i=p-1;i>=0;i--){
        if(hex[i]>9){
            cout<<(char)(65+(hex[i]-10));
        }
        else
            cout<<hex[i];
    }



}
