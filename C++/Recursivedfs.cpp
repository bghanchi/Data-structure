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


//vii v(10);
//vi visited(10,true);

//bool f=false

void DFS(vii &v,vi &visited,vi &s2,int value,bool &f){
    visited[value]=false;

    if(v[value].size()>0){
        for(auto i:v[value]){
            if(visited[i]){
                DFS(v,visited,s2,i,f);
            }
        }
        s2.pb(value);
    }
    else{
        s2.pb(value);
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    int n,e;
    cin>>n>>e;
    vii v(n+1);
    vi visited(n+1,true);

    for(int i=0;i<e;i++){
        int u,w;
        cin>>u>>w;
        v[u].pb(w);
//        cout<<i<<" ";
    }

    vi s2;
    bool f=false;
    for(int i=1;i<=n;i++){
        if(visited[i]){
            DFS(v,visited,s2,i,f);
        }
    }

//    s1.pb(all(s2));
    vi s1(s2.rbegin(),s2.rend());
    for(auto i:s1){
        cout<<i<<" ";
    }


}

