#include<iostream>
#include<string.h>
#include<vector>
#define v 4
using namespace std;
int main(){
    int n,e ;
    cin>>n>>e;
    bool graph[n][n];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
          graph[i][j]=false;
          }
     }

    for(int j=0;j<e;j++)
    {
        int a,b;
        cin>>a>>b;
        graph[a][b]=true;
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        if(graph[a][b]){
            cout<<graph[a][b]<<'\n';
        }
    }
    return 0;
}


