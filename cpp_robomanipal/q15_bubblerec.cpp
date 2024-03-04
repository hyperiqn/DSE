#include<iostream>
using namespace std;
int bubblerec(int a[],int n){
    int i,j,temp;
    if(n==1)
        return 0;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    return bubblerec(a,n-1);
}
int main(){
    int a[50];
    int n,i;
    cout<<"enter number of elements: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter element: ";
        cin>>a[i];
    }
    bubblerec(a,n);
    for(i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }

}
