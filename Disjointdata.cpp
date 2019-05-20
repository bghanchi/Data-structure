#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x:x<n?i<n:i>=n;x<n?i++:i--)
#define int1 long long int
#define pb push_back
#define p push
#define em emplace_back
#define mt make_tuple
#define degub(c) cout<<c<<endl;
//#define find(v,x) find(all(v),x)!=v.end()

using namespace std;

typedef vector<int1>vi;
typedef vector<int1>vii;
typedef pair<int1,int1>pi;
typedef tuple<int1,int1,int1>ti;


void unionn(vi &v,int x,int y){
    v[x]=v[y];
}

int find(vi &v,int a, int b){
    if(v[a]==v[b]){
        return v[a];
    }
    else{
        return 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;
    vi v(n+1);

    for(int i=0;i<=n;i++){
        v[i]=i;
    }

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        unionn(v,x,y);
    }

    int a,b;
    cin>>a>>b; 

    if(find(v,a,b)){
      cout<<"In same subset"<<endl;  
    }
    else{
        cout<<"not in same subset"<<endl;
    }



}

