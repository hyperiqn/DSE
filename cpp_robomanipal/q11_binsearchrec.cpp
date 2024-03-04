#include<iostream>
using namespace std;
int binrec(int a[],int low,int high,int ele){
    int mid;
    if(low<=high){
        mid=(low+high)/2;
        if(a[mid]==ele)
            return mid+1;
        else if(a[mid]>ele)
            return binrec(a,low,high-1,ele);
        else
            return binrec(a,low+1,high,ele);
    }
    else
        return -1;

}
int main(){
    int a[50];
    int n,i,ele,pos;
    cout<<"enter number of elements: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter element: ";
        cin>>a[i];
    }
    cout<<"enter element to be found: ";
    cin>>ele;
    pos=binrec(a,0,n-1,ele);
    if(pos==-1){
        cout<<"\nnot found";
    }
    else
        cout<<"\nfound at "<<pos;

}
