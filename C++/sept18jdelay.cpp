/*
User: bharat12

Contest: LTIME64B
Problem: JDELAY

*/

#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<=n;i++)
#define tr1(i,x,n) for(int i=x;i<n;i++)
#define em emplace_back
#define mk make_tuple
using namespace std;
typedef vector<long long int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;


int main(){
 ios_base::sync_with_stdio(false);
 int t;
 cin>>t;
 while(t--){
  int n,m;
  cin>>n;
  vector<pi>v;
  int i=0;
  int count=0;
  for(int i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      if((b-a)>5){
          count++;
      }
  }
 cout<<count<<"\n";


  
 }


}
