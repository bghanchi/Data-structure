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
   vi v(n),cost(n,0);
   for(auto i=0;i<n;i++){
       cin>>v[i];
   }

   ll minn=1e9;   
   cost[0]=0;
   cost[1]=max(v[0]-v[1],v[1]-v[0]);
   for(auto i=2;i<n;i++){
       ll t2,t1;
       t1=max(v[i]-v[i-1],v[i-1]-v[i])+cost[i-1];
       t2=max(v[i]-v[i-2],v[i-2]-v[i])+cost[i-2];
       cost[i]=min(t1,t2);
   }

   cout<<cost[n-1]<<endl;
}