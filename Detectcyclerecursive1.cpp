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

/*
vii v(10);
vi visited(10,true);
*/

//bool f=false;

void DFS(vii &v,vi &visited,vi &s2,int value,bool &f){
    visited[value]=false;

//    cout<<value<<" "; 
    if (find(all(s2),value)!=s2.end()){
  //      cout<<value<<endl;
        f+=1;
    }
    else{
        s2.pb(value);
        if(v[value].size()>0){
            for(auto i:v[value]){
                    DFS(v,visited,s2,i,f);
            }
        }
        s2.pop_back();
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

    bool f=false; 
    vi s2;
 
    for(int i=1;i<=n;i++){
        if(visited[i]){
            DFS(v,visited,s2,i,f);
        }
    }
    
 //   cout<<endl;
    cout<<f<<endl;

//    s1.pb(all(s2));
/*
    for(auto i:s2){
        cout<<i<<" ";
    }

*/

}

