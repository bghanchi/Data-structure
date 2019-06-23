#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define pb push_back
#define em emplace_back
#define ll long long int
#define mp make_pair

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

int MAXN=100;
int MAXW=100;

int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        
        ll n=s.length();
        vi v(n);
        vi cost(n,1);
    
        for(auto i=0;i<n;i++){
            v[i]=s[i]-'a';
        }
        
        ll maxx=-1e9;
        for(auto i=0;i<n;i++){
            for(auto j=0;j<i;j++){
                if(v[i]>v[j]){
                    cost[i]=max(cost[i],cost[j]+1);
                    maxx=max(maxx,cost[i]);
                }
            }
        }

    cout<<maxx<<endl; 
    }

}