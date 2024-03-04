#include<iostream>
using namespace std;
void matmul(int a[][50],int m,int n,int b[][50],int p,int q,int c[][50]){
    int i,j,k;
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            for(k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
void transpose(int a[][50],int m,int n,int t[][50]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            t[j][i]=a[i][j];
        }
    }
}
int main(){
    int a[50][50];
    int b[50][50];
    int c1[50][50];
    int op2[50][50];
    int op1[50][50];
    int ta[50][50];
    int tb[50][50];
    int i,j,k,m,n,p,q;
    cout<<"enter number of rows and columns in a: ";
    cin>>m>>n;
    cout<<"enter number of rows and columns in b: ";
    cin>>p>>q;
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
    matmul(a,m,n,b,p,q,c1);
    transpose(c1,m,q,op1);
    for(i=0;i<q;i++){
        for(j=0;j<m;j++){
            cout<<op1[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\n\n\n";
    transpose(a,m,n,ta);
    transpose(b,p,q,tb);
    matmul(ta,n,m,tb,q,p,op2);
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            cout<<op2[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nhence proved";
}
