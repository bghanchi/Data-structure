#include<bits/stdc++.h>
#include<string.h>
#define all(c)  c.begin(),c.end()
#define ll long long int
#define em emplace_back
#define pb push_back
#define mt make_pair
#define f first
#define s second
#define fnd(c,x) find(all(c),x)==c.end()
#define fd(c,x) find(all(c),x)!=c.end()
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;


int main(){
    ios_base::sync_with_stdio(false);

    ll nd,ed;
    cin>>nd>>ed;

    vector<pi>v[nd+1];
    vi v1;

    for(ll i=0;i<ed;i++){
        ll x,y,wt;
        cin>>x>>y>>wt;
        v[x].pb({y,wt});
        v[y].pb({x,wt});

    }


    ll f=0;
    ll min=1000;
    ll a,b;
    ll sum=0;
    ll count=0;
    ll index=0;
    while(1){
        f=0;
        min=1000;
        index=0;
        for(ll i=1;i<=nd;i++){
            for(ll j=0;j<v[i].size();j++){
                if(fnd(v1,v[i][j].f) or fnd(v1,i)){
//                    cout<<i<<" "<<j.f<<endl;
                    if(v[i][j].s<min){
                           min=v[i][j].s;
                           a=i;
                           b=v[i][j].f;
                           f++;
                          index=j;            
                    }
                }
            }
        }

        if(f!=0){
            sum+=min;
            cout<<a<<" "<<b<<" "<<index<<endl;
            v1.pb(a);
            v1.pb(b);
            v[a].erase(v[a].begin()+index);
            count++;
        }

        else{
            break;
        }






    }

 for(ll i=1;i<=nd;i++){
     for(auto j:v[i]){
         cout<<i<<" "<<j.f<<endl;
     }
 }


} 
/*
    if(count<nd-1){
        min=1000;
        for(ll i=1;i<=nd;i++){
            for(auto j:v[i]){
                    if(j.s<min){
                           min=j.s;
                           a=i;
                           b=j.f;
                           f++;
                           
                }
            }
        }
        
    }

            sum+=min;

 cout<<sum<<" "<<count<<endl;
 
*/