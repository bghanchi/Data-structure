/*
User: bharat12
Problem: CHEFRES 

*/


#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<=n;i++)
#define tr1(i,x,n) for(int i=x;i<n;i++)
#define em emplace_back
#define mk make_tuple
#define ll long long int
using namespace std;
typedef vector< int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;

bool sorrt(pi a,pi b){
    return a.first<b.first;
}

bool sorrt1(int a,int b){
    return a<b;
}

int main(){
 ios_base::sync_with_stdio(false);
 ll t;
 cin>>t;
 while(t--){
  ll n,m;
  cin>>n>>m;
  vector<pi>v;
  ll i=0;
  tr(i,1,n){
     ll a,b;
      cin>>a>>b;
      v.em(a,b);
  }
   sort(all(v),sorrt);

     vector<pi>v1;
     vector<ll>result(m,-1);

     tr(i,0,m-1){
         ll t1;
         cin>>t1;
         v1.em(t1,i);
     }

     sort(all(v1),sorrt);
     i=0;

     for(auto k:v){
         while(i<m and v1[i].first<k.second){
               result[v1[i].second]=max(0,(k.first-v1[i].first));
               i++; 
         }
     }

     for(auto i:result){
         cout<<i<<"\n";
     }

    
   }

 }
