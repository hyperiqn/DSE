#include<iostream>
#include<cstring>
using namespace std;
void sortw(char a[][100],int n){
    int i,j;
    char temp[100];
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strlen(a[j])>strlen(a[j+1])){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
void sortl(char a[][100],int n){
    int i,j,k,len;
    char temp;
    for(i=0;i<n;i++){
        len=strlen(a[i]);
        for(j=0;j<len;j++){
            for(k=0;k<len-j-1;k++){
                if((int)a[i][k]>(int)a[i][k+1]){
                    temp=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=temp;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
int main(){
    char str[50][100];
    int i,n;
    cout<<"enter number of words: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter word: ";
        cin>>str[i];
    }
    sortw(str,n);
    cout<<"\n\n";
    sortl(str,n);

}
