#include<iostream>
#include<string.h>
#include<vector>
#define v 4
using namespace std;
void hello(int ,int );
void display();
bool a[v][v];
int main(){
   int e;
   cin>>e;
  for(int i=0;i<v;i++){
      for(int j=0;j<v;j++){
          a[i][j]=false;
      }
  }
    for(int i=0;i<e;i++){
         int j,k;
         cin>>j>>k;
        hello(j,k);
    }
    display();
    return 0;
}


void hello(int i,int j){
    a[i][j]=true;
}

void display()
{
    for(int i=0;i<=v;i++){
        for(int j=0;j<=v;j++){
            if(a[i][j]){
                cout<<i<<"\t"<<j<<"\t"<<a[i][j]<<"\n";
            }
        }
    }

}