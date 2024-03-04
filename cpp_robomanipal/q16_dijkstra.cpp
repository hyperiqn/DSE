#include<iostream>
using namespace std;
const int MAX=100;
int check(int k[100],int l,int n){
    for(int i=0;i<n;i++){
        if(k[i]==l){
        return 0;
        }
    }
    return 1;
}
int dijkstra(int k[100][100],int source,int n){
    int distance[n],spanct[100];
    for(int i=0;i<n;i++){
        distance[i]=MAX;
    }
    distance[source]=0;
    spanct[0]=source;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){//goes through all elements of distance[] to check if sum of distance from source to a point and from
            if(k[spanct[i]][j]!=0&&(distance[spanct[i]]+k[spanct[i]][j]<distance[j])){ //point to destination is less than
            distance[j]=distance[spanct[i]]+k[spanct[i]][j];      //distance from source to destination
            }
        }
        int mini=100,k;
        for(int j=0;j<n;j++){
            if(check(spanct,j,i+1)==1){
                if (mini>distance[j]){
                    mini=distance[j];
                    spanct[i+1]=j;
                }
            }
        }
    }
    cout<<"Vertex"<<"\tShortest Span"<<"\n"; //prints shortest distance from source to destination
    for(int i=0;i<n;i++){
        cout<<i<<"\t"<<distance[i]<<"\n";
    }
}
//takes input for matrix, displays it and takes source as input
int main(){
    int n;
    cout<<"Enter the number of points:";
    cin>>n;
    int k[100][100];
    for(int i=0;i<n;i++){
        k[i][i]=0;
        for(int j=i+1;j<n;j++){
        cout<<"Enter distance from point "<<i<<" to point "<<j<<" :"<<endl;
        cin>>k[i][j];
        k[j][i]=k[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<k[i][j]<<"\t";
        }
        cout<<"\n";
    }
    int source;
    cout<<"enter source: ";
    cin>>source;
    dijkstra(k,source,n);
}
