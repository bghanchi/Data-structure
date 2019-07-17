#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#include<map>
#define all(c) c.begin(),c.end()
#define tr(i,n)  for(int i=0;i<n;i++)
#define pb push_back
#define em emplace_back
#define ll long long int
#define mp make_pair
#define mt make_tuple
#define debug(c) cout<<c<<endl;
#define find(x,v)  find(all(v),c)!=v.end()
#define isro ios_base::sync_with_stdio(false);

using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;
typedef tuple<int,int,int>ti;


int main(){
    isro;
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=1;i<n-1;i++){
        int a;
        cin>>a;
        m[a]=1;
    }
    vector<int>v1;
    for(int i=1;i<=n;i++){
        if(m[i]!=1){
            v1.pb(i);
        }
    }
    for(auto i:v1){
        cout<<i<<" ";
    }
}