#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define em emplace_back
#define pb push_back
#define mt make_tuple
#define mp makle_pair
#define ll long long int
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

//ll max=1e9,count=0;

int main(){
    ll n;
    cin>>n;
    vi v(n),v1(1000);
    ll  max1=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        v1[v[i]]++;
        max1=max(v[i],max1);
    }

d    for(ll i=0;i<=max1;i++){
        while(v1[i]--){
            cout<<i<<" ";
        }
    }

  

}