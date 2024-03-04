#include<iostream>
using namespace std;
int main(){
    int i,j,n,s,flag = 0,pos;
    int a[10][10];
    cout<<"enter order of matrix:"<<endl;
    cin>>n;
    cout<<"enter non-zero elements:"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i==j)||(i==j+1)||(i==j-1))
                cin>>a[i][j];
            else
                a[i][j] = 0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    int b[25];
    int ct = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i==j)||(i==j+1)||(i==j-1)){
                b[ct]=a[i][j];
                ct++;
            }
        }
    }
    for(i=0;i<ct;i++){
        cout<<b[i]<<"\t";
    }
    cout<<endl;
    cout<<"enter element to be found"<<endl;
    cin>>s;
    for(i=0;i<ct;i++){
        if(b[i]==s){
            pos=i+1;
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"found at:"<<pos<<endl;
    else
        cout<<"not found"<<endl;
}

