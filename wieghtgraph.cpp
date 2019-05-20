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

    vector<pi>v[n+1];    
    vi visited(n+1,1);

//    v[0].push_back(make_pair(1, 2)); 
//      v[0].em(1,2);

    for(ll i=0;i<e;i++){
        ll u,a,b;
        cin>>u>>a>>b;
        v[u].pb(make_pair(a,b));
//        v[v1].pb(u1);
//        cout<<"Never Give Up"<<" ";
    }
//    cout<<v[0][0].first<<endl;

    queue<pi>q;
    q.push(make_pair(1,1));

    visited[1]=0;      
    while(!q.empty()){
        pi t=q.front();
        q.pop();
        ll t1=t.first;
        cout<<t.first<<endl;
        for(ll i=0;i<v[t1].size();i++){
             if(visited[v[t1][i].first]){
                 q.push(v[t1][i]);
                 visited[v[t1][i].first]=0;
             }
         }

     }

}

/*
        for(ll i=0;i<v[t].size();i++){
             if(visited[v[t][i].first]){
                 q.push(v[t][i].first);
                 visited[v[t][i].first]=0;
             }
         }

*/

/*
    for(ll i=0;i<e;i++){
        ll u,a,b;
        cin>>u>>a>>b;
        v[u].({a,b});
//        v[v1].pb(u1);
//        cout<<"Never Give Up"<<" ";
    }

    queue<ll>q;
    q.push(0);
*/

/*
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

*/
