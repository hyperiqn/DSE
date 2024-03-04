#include<iostream>
using namespace std;
struct term{
    public:
    int coeff;
    int pow;
};
int main(){
    int i,j,k,m,n,s,flag = 0,pos,ct=0;
    cout<<"enter number of terms in first polynomial"<<endl;
    cin>>m;
    cout<<"enter number of terms in second polynomial"<<endl;
    cin>>n;
    term a[m];
    term b[n];
    term c[m+n];
    cout<<"first polynomial:"<<endl;
    for(i=0;i<m;i++){
        cout<<"enter coefficient:"<<endl;
        cin>>a[i].coeff;
        cout<<"enter power:"<<endl;
        cin>>a[i].pow;
    }
    cout<<"second polynomial:"<<endl;
    for(i=0;i<n;i++){
        cout<<"enter coefficient:"<<endl;
        cin>>b[i].coeff;
        cout<<"enter power:"<<endl;
        cin>>b[i].pow;
    }
    i = 0;
    j = 0;
    k = 0;
    while (i < m && j < n) {
        if (a[i].pow == b[j].pow) {
            c[k].coeff = a[i].coeff + b[j].coeff;
            c[k].pow = a[i].pow;

            i++;
            j++;
            k++;
        }
        else if (a[i].pow > b[j].pow) {
            c[k].coeff = a[i].coeff;
            c[k].pow = a[i].pow;
            i++;
            k++;
        }
        else {
            c[k].coeff = b[j].coeff;
            c[k].pow = b[j].pow;
            j++;
            k++;
        }
    }
    while (i < m) {
        c[k].coeff = a[i].coeff;
        c[k].pow = a[i].pow;
        i++;
        k++;
    }
    while (j < n) {
        c[k].coeff = b[j].coeff;
        c[k].pow = b[j].pow;
        j++;
        k++;
    }
    for(i=0;i<k;i++){
        cout<<c[i].coeff<<"\t"<<c[i].pow<<endl;
    }
}
