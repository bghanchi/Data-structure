/*
User: bharat12

Problem: MATCH2
Contest: LTIME64B

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
  cin>>n>>m;
  vi a(n+1),b(n+1);
  int i=0;
  int pr=0,count=0;
  tr(i,1,n){
      cin>>a[i];
  }
  tr(i,1,n){
      cin>>b[i];
  }
  tr(i,1,n){
      if(a[i]==b[i]){
          pr++;
      }
  }

  int x,y,z;
  while(m--){
      int count1=0;
      int count2=0;
  int x,y,z;
  cin>>x>>y>>z;
  int l=x^pr,r=y^pr,c=z^pr;
//  cout<<l<<" "<<r<<" "<<c<<" "<<pr<<"\n";
  tr(i,l,r){
        if(a[i]==b[i]){
            count1++;
        }
        if(b[i]==c){
            count2++;
        }
        a[i]=c;
 
  }
 pr+=count2-count1;
 cout<<pr<<"\n";


  }


 }
  
 

}
