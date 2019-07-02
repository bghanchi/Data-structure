#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define em emplace_back
#define mp make_pair
#define mt make_tuple
#define debug(c) cout<<c<<endl;
#define isro ios_base::sync_with_stdio(false);
#define find(v,x) find(all(v),x)!=v.end()
#define str(a) std::to_string(a)
#define integer(a) std::stoi(a)

ll mod=1e9+7;

using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

vi v(1000);
ll n;
void inorder(ll i){
    if(i<=n){
        cout<<v[i]<<" ";
        inorder(i*2);
        inorder(i*2+1);
    }
}
int main(){
    isro;

//    ll n;
    cin>>n;

//    vi v(n+1,0);
  
    for(ll i=1;i<=n;i++)  cin>>v[i];

//    inorder(1);  


    for(ll i=n;i>0;i--){
        ll n1=i;
        ll n2=n1/2;
        
        while(v[n2]>v[n1] and (n1>0 or n2>0)){
            swap(v[n1],v[n2]);
            n1=n2;
            n2=n1/2;
        }

        if(v[i/2]>v[i]){
            swap(v[i],v[i/2]);
            }
        }


    for(ll i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }

    
}
