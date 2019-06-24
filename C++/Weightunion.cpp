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


int root(vi &v,ll i){
    while(v[i]!=i){
        i=v[i];
    }

    return i;
}

void weightunion(vi &v,vi &size,ll a,ll b){
    ll root_a=root(v,a);
    ll root_b=root(v,b);
    
//    cout<<root_a<<" "<<root_b<<endl;

    if(size[root_a]<size[root_b]){
        v[root_a]=root_b;
        size[root_b]+=size[root_a];
        size[root_a]=0;
    }
    else{
        v[root_b]=root_a;
        size[root_a]+=size[root_b];
        size[root_b]=0;
    }
}


bool find(vi &v,ll a,ll b){
    if(v[a]==v[b])
        return true;
    else
        return false;
}


int main(){
    ios_base::sync_with_stdio(false);
    ll n,t;
    cin>>n>>t;
    vi v(n+1),size(n+1,1);
    size[0]=0;

    for(ll i=1;i<=n;i++){
        v[i]=i;
        size[i]=1;
    }

    while(t--){
        ll a,b;
        cin>>a>>b;
        weightunion(v,size,a,b);
        vi s(all(size));
        sort(all(s));
        for(ll i=1;i<=n;i++){
            if(s[i]>0)
                cout<<s[i]<<" ";
        }
        cout<<endl;
    }
}


/*
      
    for(auto i:v){
        cout<<i<<" ";
    }  

    cout<<endl;

    for(auto j:size){
        cout<<j<<" ";
    }
/*
    ll x,y;
    cin>>x>>y;
    if(find(v,x,y)){
          cout<<"connected"<<endl;
    }
    else{
        cout<<"not connected"<<endl;
    }

*/


