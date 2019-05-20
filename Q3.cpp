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

ll x[100010];

ll distribute(ll p,ll n){
    ll finalvalue=0;
    for(ll i=0;i<n;i++){
        ll t=x[i]-p;
        finalvalue+=t/5+t%5/2+t%5%2;
    }
    return finalvalue;
}

int main() {

        ll n; 
        cin>>n;
        ll q=1000;
        for(ll i=0;i<n;i++){
            cin>>x[i];
            q=min(q,x[i]);
        }
        ll result=1e9;
        for(ll i=0;i<5;i++){
            result=min(result,distribute(q-i,n));
        }
        cout<<result<<endl;

    return 0;
}