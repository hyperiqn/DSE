//credit to precey
#include<iostream>
using namespace std;
const int MAX=1000;
int check(int a[100],int l, int n){ //checks if vertex has been visited yet
    int i;
    for(i=0;i<n;i++){
        if(a[i]==l)
            return 0;
    }
    return 1;
}
int dijkstra(int mat[][100],int source,int n){
    int distance[n]; //stores shortest distances
    int vfound[100]; //keeps track of vertices found
    int i;
    for(int i=0;i<n;i++){
        distance[i]=MAX; //initializes all values of distance to max
    }
    distance[source]=0;
    vfound[0]=source;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){//goes through all elements of distance[] to check if sum of distance from source to a point and from
            if(mat[vfound[i]][j]!=0&&(distance[vfound[i]]+mat[vfound[i]][j]<distance[j])){ //point to destination is less than
            distance[j]=distance[vfound[i]] + mat[vfound[i]][j];      //distance from source to destination
            }
        }
        int mini=100;
        for(int j=0;j<n;j++){
            if(check(vfound,j,i+1)==1){ //looks for vertex with minimum distance that hasn't been visited yet
                if (mini>distance[j]){
                    mini=distance[j];
                    vfound[i+1]=j;
                }
            }
        }
    }
    cout<<"vertex"<<"\t"<<"shortest distance from "<<source<<endl;
    for(i=0;i<n;i++){
        cout<<i<<"\t"<<distance[i]<<endl;
    }
}
//takes input for matrix, displays it and takes source as input
int main(){
    int mat[100][100];
    int n,i,j;
    cout<<"Enter the number of points:";
    cin>>n;
    for(i=0;i<n;i++){
        mat[i][i]=0;
        for(j=i+1;j<n;j++){
        cout<<"Enter distance from "<<i<<" to "<<j<<" :"<<endl;
        cin>>mat[i][j];
        mat[j][i]=mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }
    int source;
    cout<<"enter source: ";
    cin>>source;
    dijkstra(mat,source,n);
}
