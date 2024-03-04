#include<iostream>
using namespace std;
int main(){
    int i,j,m,n,s,flag = 0,pos;
    int a[10][10];
    cout<<"enter number of rows:"<<endl;
    cin>>m;
    cout<<"enter number of columns:"<<endl;
    cin>>n;
    cout<<"enter elements:"<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    int b[25][3];
    int ct = 1;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=0){
                b[ct][0] = i+1;
                b[ct][1] = j+1;
                b[ct][2] = a[i][j];
                ct++;
            }
        }
    }
    b[0][0] = m;
    b[0][1] = n;
    b[0][2] = ct-1;
    for(i=0;i<ct;i++){
        for(j=0;j<3;j++){
            cout<<b[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"enter element to be found"<<endl;
    cin>>s;
    for(i=1;i<ct;i++){
        if(b[i][2]==s){
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
