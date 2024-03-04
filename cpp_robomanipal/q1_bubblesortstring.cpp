#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[50];
    char temp;
    int i,j,n;
    cout<<"enter string: "<<endl;
    cin>>str;
    n=strlen(str);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if((int)str[j]>(int)str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    cout<<str<<endl;
}
