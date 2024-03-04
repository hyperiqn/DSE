#include<iostream>
using namespace std;
int a[50];
void ssort(int c[],int n){
    int i,j,small,pos,temp;
    for(i=0;i<n-1;i++){
        small=c[i];
        pos=i;
        for(j=i+1;j<n;j++){
            if(small>c[j]){
                small=c[j];
                pos=j;
            }
        }
        c[pos]=c[i];
        c[i]=small;
    }
}
void bsort(int c[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int binsearch(int c[],int n){
    int ele,i,low,high,mid,pos=-1;
    cout<<"\nenter element to be found: ";
    cin>>ele;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==ele){
            pos=mid+1;
            break;
        }
        else if(a[mid]<ele)
            low=mid+1;
        else
            high=mid-1;
    }
    return pos;
}
int main(){
    int n,i,pos;
    cout<<"enter length of array: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"<"<<i<<">";
        cin>>a[i];
    }
    char choice;
    cout<<"s-selection sort\nb-bubble sort"<<endl;
    cin>>choice;
    switch(choice){
    case 's':
        ssort(a,n);
        break;
    case 'b':
        bsort(a,n);
        break;
    default:
        cout<<"invalid choice";
        exit(0);
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    pos=binsearch(a,n);
    if(pos==-1)
        cout<<"element not found"<<endl;
    else
        cout<<"found at "<<pos<<endl;
}
