#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define pb push_back
#define em emplace_back
#define ll long long int
#define mp make_pair
#define isro ios_base::sync_with_stdio(false);
#define debug(c) cout<<c<<endl;
#define find(v,x) find(all(v),x)!=v.end()
using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

int MAXN=100;
int MAXW=100;


int main(){
   isro; 
   ll n;
   cin>>n;
   vii cost(n,vi(3,0));
   vi A(n),B(n),C(n);
   
   for(auto i=0;i<n;i++){
         cin>>A[i]>>B[i]>>C[i];
   }

   cost[0][0]=A[0];
   cost[0][1]=B[0];
   cost[0][2]=C[0];  
       
   for(auto i=1;i<n;i++){
       cost[i][0]=max(A[i]+cost[i-1][1],A[i]+cost[i-1][2]);
       cost[i][1]=max(B[i]+cost[i-1][0],B[i]+cost[i-1][2]);
       cost[i][2]=max(C[i]+cost[i-1][0],C[i]+cost[i-1][1]);
   }

   cout<<max(cost[n-1][0],max(cost[n-1][1],cost[n-1][2]));


}

/*
   for(auto i=0;i<n;i++){
       for(auto j=0;j<3;j++){
           cout<<cost[i][j]<<" ";
       }
       cout<<endl;
   }

*/   

