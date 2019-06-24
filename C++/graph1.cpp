#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    int n,e;
    cin>>n>>e;
   vector<int>array[10];
   int b[e];
  for(int i=0;i<e;i++){
         int j,k;
         cin>>j>>k;
        b[i]=j;
    array[j].push_back(k);
    }

for(int i = 0;i <e;++i)
    {   
        cout << "Adjacency list of node " << b[i] << "\t ";
        for(int j = 0;j < array[b[i]].size();++j)
            {
               cout<<array[b[i]][j]<<"\t";
           }
           cout<<"\n";
    }       

/*
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){

       cout<<array[i][j]<<"\t";

      }
      cout<<"\n";
    }

*/
    return 0;
}
