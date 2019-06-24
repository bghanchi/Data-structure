#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x:x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define p push
#define em emplace_back
#define mt make_tuple
#define degub(c) cout<<c<<endl;
#define find(v,x) find(all(v),x)!=v.end()

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;


int main(){
    ios_base::sync_with_stdio(false);
    ll n,e;
    cin>>n>>e;

    vii v(n+1);
    vi visited(n+1,1);

    for(ll i=0;i<e;i++){
        ll v1,u1;
        cin>>u1>>v1;
        v[u1].pb(v1);
        v[v1].pb(u1);
//        cout<<"Never Give Up"<<" ";
    }

    queue<ll>q;
    q.push(0);

    visited[0]=0;      
    while(!q.empty()){
//        cout<<"Hello Bharat Kumar"<<" ";
        ll t=q.front();
        q.pop();
        cout<<t<<" ";
        for(ll i=0;i<v[t].size();i++){
             if(visited[v[t][i]]){
                 q.push(v[t][i]);
                 visited[v[t][i]]=0;
             }
         }
     }

}