//algorithm from geeksforgeeks
#include <iostream>
#include <climits>
using namespace std;
#define V 5
int minKey(int key[], bool mstSet[]){ //finds vertex with minimum value
    int m=1000;
    int min_index;
    for (int v=0;v<V;v++){
        if (!mstSet[v]&&key[v]<m){
            m=key[v];
            min_index=v;
        }
    }
    return min_index;
}
void prim(int graph[V][V]){
    int parent[V]; //stores parent of each vertex
    int key[V];    //stores key value of each vertex
    bool mstSet[V];//stores found vertices

    for (int i=0;i<V;i++){
        key[i]=1000;
        mstSet[i]=false;
    }
    key[0]=0;
    parent[0]=-1;
    for (int ct=0;ct<V-1;ct++){
        int u=minKey(key, mstSet);
        mstSet[u]=true;

        for (int v=0;v<V;v++){
            if (graph[u][v]&&!mstSet[v]&&graph[u][v]<key[v]){
                parent[v]=u;
                key[v]=graph[u][v];
            }
        }
    }

    cout << "Edge \tWeight\n";
    for (int i=1;i<V;i++){
        cout << parent[i]<<"-"<<i<<"\t"<<graph[i][parent[i]]<<"\n";
    }
}

int main(){
    int n=5,i,j;
    int graph[V][V];
    cout<<"number of points is 5.\n";
    for(i=0;i<n;i++){
        graph[i][i]=0;
        for(j=i+1;j<n;j++){
        cout<<"Enter distance from "<<i<<" to "<<j<<" :"<<endl;
        cin>>graph[i][j];
        graph[j][i]=graph[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<graph[i][j]<<"\t";
        }
        cout<<"\n";
    }

    prim(graph);

    return 0;
}

