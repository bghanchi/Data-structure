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
//    vi visited(n+1,1);

    ll start=1;
    for(ll i=0;i<e;i++){
        ll v1,u1;
        cin>>u1>>v1;
        start=min(u1,start);
        v[u1].pb(v1);
    }

    queue<ll>q;



    ll f=0;
    while(start<=n){

    if(v[start].size()>0){
    vi visited(n+1,1);

    queue<ll>q;
    q.push(start);
    visited[start]=0;      
//    cout<<start<<"hi"<<endl;

    while(!q.empty()){
        ll t=q.front();
        q.pop();
//        cout<<t<<" "<<"Hai"<<endl;
        for(ll i=0;i<v[t].size();i++){
             if(visited[v[t][i]] and visited[v[t][i]]!=start){
//                 cout<<v[t][i]<<" "<<start<<endl;
                 q.push(v[t][i]);
                 visited[v[t][i]]=0;
             }
             else if(v[t][i]==start){
//                 cout<<v[t][i]<<" "<<start<<" "<<"break"<<endl;
                 f+=1;
                 break;
             }
         }
     }


     start++;
     if(f!=0){
         break;
     }
//     cout<<endl;


    }    

   }

     if(f==0){
         cout<<"not cycle"<<endl;
     }
     else{
         cout<<"cycle"<<endl;
     }

}


/*

    visited[start]=0;      
    ll f=0;
    while(!q.empty()){
        ll t=q.front();
        q.pop();
//        cout<<t<<" ";
        for(ll i=0;i<v[t].size();i++){
             if(visited[v[t][i]]){
                 //cout<<v[t][i]<<" ";
                 q.push(v[t][i]);
                 visited[v[t][i]]=0;
             }
             else if(v[t][i]==1){
                 f+=1;
                 break;
             }
         }
     }



*/