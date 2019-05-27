/*
lauchoct
User: bharat12

Problem: THREEFR

*/


#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;x<n?i<=n:i>=n;x<n?i++:i--)
#define em emplace_back
#define pb push_back
#define ll long long int
#define vi vector<ll>
#define vii vector<vii>
#define ODD(x) (((x)&1)==0?(0):(1))
#define sign(x) ((x > 0) - (x < 0))
using namespace std;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

inline ll gcd(ll a, ll b) { return a ? gcd(b%a, a): b; }
inline ll lcm(ll a, ll b) { return a / gcd(a,b) * b; }

int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a+b==c){
            cout<<"yes"<<"\n";
        }
        else if(b+c==a){
            cout<<"yes"<<"\n";
        }
        else if(a+c==b){
            cout<<"yes"<<"\n";
        }
        else{
            cout<<"no"<<"\n";
        }

    }
}
