#include<bits/stdc++.h>
#include<string.h>
#include<queue>
#include<vector>
#define all(c)  c.begin(),c.end()
#define ll long long int
#define em emplace_back
#define pb push_back
#define mt make_pair
#define debug(s) cout<<s<<endl;
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;

//ll max=1e9;c


int main(){
  ios_base::sync_with_stdio(false);

  ll nd,ed;
  cin>>nd>>ed;
  vector<pi>v[nd+1];
  vi que(nd+1,1);
  vi dist(nd+1,10000);
  dist[0]=0;
  dist[1]=0;



  for(ll i=0;i<ed;i++){
     ll x,y,wt;
     cin>>x>>y>>wt;
     v[x].pb(mt(y,wt));
  }


  queue<ll>q;
  q.push(1);

  while(!q.empty()){
      ll a=q.front();
      q.pop();
   //   cout<<a<<endl;  
     if(v[a].size()>0){
        for(ll i=0;i<v[a].size();i++){
    //        debug("hello");
    //              cout<<v[a][i].first<<" "<<v[a][i].second<<endl;  
                dist[v[a][i].first]=min(dist[v[a][i].first],dist[a]+v[a][i].second);
    //              cout<<dist[v[a][i].first]<<endl;
                q.push(v[a][i].first);
                que[v[a][i].first]=0;
        }
     }
  }


 
 for(ll i=1;i<=nd;i++){
     cout<<dist[i]<<endl;
 }
}