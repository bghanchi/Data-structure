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
//#define find(v,x) find(all(v),x)!=v.end()

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;


vector<pi>v[10];
vi visited(10,true);
vi cost(100,10*100);
bool f=false;

void DFS(vi &s2,int value,int parent){
    visited[value]=false;


      cost[value]=min(cost[value],cost[parent]+v[parent][value].second); 
      cout<<value<<" value "<<cost[value]<<endl;
//      cout<<parent<<" "<<value<<endl; 
//        s2.pb(value);
    if(v[value].size()>0){
        for(auto i:v[value]){
                DFS(s2,i.first,value);
        }
    }
//        s2.pop_back();

}

int main(){
    ios_base::sync_with_stdio(false);
    int n,e;
    cin>>n>>e;
//    vii v(n+1);
//    vi visited(n+1,true);

    for(ll i=0;i<e;i++){
        ll u,a,b;
        cin>>u>>a>>b;
        v[u].pb(make_pair(a,b));
//        v[v1].pb(u1);
//        cout<<"Never Give Up"<<" ";
    }

    cout<<endl;
    vi s2;
    cost[0]=0;
    cost[1]=0;
    for(int i=1;i<=n;i++){
        if(visited[i]){
            DFS(s2,2,1);
        }
    }

}    

 


 //   cout<<endl;
//    cout<<f<<endl;

//    s1.pb(all(s2));
/*
    for(auto i:s2){
        cout<<i<<" ";
    }

*/


