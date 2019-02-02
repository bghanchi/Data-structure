#include<iostream>
#include<string.h>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
    vector<int>array[e];
    int b[e];
    for(int i=0;i<e;i++){
        int j,k;
        cin>>j>>k;
        b[i]=j;
        array[j].push_back(k);
    }
    queue<int>q;
    q.push(b[0]);

    while(!q.empty()){
            int t;
        t=q.front();
        cout<<t<<"\n";
        q.pop();
        for(int j=0;j<array[t].size();j++){
            q.push(array[t][j]);
        }
    }
return 0;

}