#include <iostream>
using namespace std;
int main(){
    int a[50][50];
    int b[50][50];
    int c[50][50]={0};
    int i,j,k,m,n,p,q;
    int sum;
    cout<<"enter number of rows and columns of first matrix: "<<endl;
    cin>>m>>n;
    cout<<"enter number of rows and columns of second matrix: "<<endl;
    cin>>p>>q;
    if(n==p){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cout<<"<"<<i<<","<<j<<">";
                cin>>a[i][j];
            }
        }
        cout<<"\n";
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                cout<<"<"<<i<<","<<j<<">";
                cin>>b[i][j];
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                for(k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"\n";
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                cout<<c[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    else
        cout<<"incompatible"<<endl;

}

