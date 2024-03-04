#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[50];
    char str2[50];
    cout<<"enter string: ";
    cin>>str1;
    int i,n;
    char *p1;
    n=strlen(str1);
    p1=&str1[0];
    for(i=0;i<n;i++){
        str2[i]=*(p1+i);
    }
    cout<<"\n"<<str2;
}
