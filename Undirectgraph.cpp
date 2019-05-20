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


bool f=false;

int root(vi &v, int i){
    while(v[i]!=i){
        i=v[i];
    }
    return i;
}

void Union(vi &v,vi &size,int a, int b){
    int root_a=root(v,a);
    int root_b=root(v,b);

//    cout<<"Hello Bharat Kumar"<<endl; 
//    cout<<root_a<<" "<<root_b<<endl; 
    if(root_a==root_b){
//        cout<<root_a<<" "<<root_b<<endl;
//        cout<<"cycle"<<endl;
          f=true;
    }
    else if(size[root_a]<size[root_b]){
        v[root_a]=root_b;
        size[root_b]+=size[root_a];
    }
    else{
        v[root_b]=root_a;
        size[root_a]+=size[root_b];
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    int n,t;
    cin>>n>>t;
    vi v(n+1),size(n+1,1);

    for(int i=1;i<=n;i++){
        v[i]=i;
    }
       
    while(t--){
        int a,b;
        cin>>a>>b;
        Union(v,size,a,b);
    }

    if(f)
        cout<<"cycle"<<endl;
    else
        cout<<"not cycle"<<endl;    

}