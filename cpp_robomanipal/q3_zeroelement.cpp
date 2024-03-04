#include<iostream>
using namespace std;
int main(){
    int a[50][50];
    int m,n,i,j;
    cout<<"enter number of rows and columns: "<<endl;
    cin>>m>>n;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<"<"<<i<<","<<j<<">";
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0){
                for(j=0;j<n;j++){
                    a[i][j]=0;
                }
                break;
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
