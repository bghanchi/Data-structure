/*
lauchoct
User: bharat12

Problem: WEIRD2 
*/

#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;x<n?i<=n:i>=n;x<n?i++:i--)
#define ll long long int
#define f first
#define s second
#define sign(x) ((x > 0) - (x < 0))
#define em emplace_back
#define mt make_tuple
#define FAST ios_base::sync_with_stdio(false); 
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;
const int INF = int (1e9) + int (1e5);
//const ll INFL = ll(2e18) + ll(1e10);
//const ui MOD = 1E9 + 7;
const double EPS = 1e-9;
inline ll powmod(ll a,ll b,ll mod) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
inline ll gcd(ll a, ll b) { return a ? gcd(b%a, a): b; }
inline ll lcm(ll a, ll b) { return a / gcd(a,b) * b; }


int main(){
    FAST;
    int t;
    cin>>t;
    while(t--){
    ll  n;
    cin>>n;
    vi v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    vi v1=v; 
    sort(v1.begin(), v1.end() );
    v1.erase( unique( v1.begin(), v1.end() ), v1.end() );   
  //    vi v1=set(v);
    int n1 =v1.size();
    ll count1=0; 
    vi v2(n1);
    for(ll i=0;i<n1;i++){
            v2[i]=count(v.begin(), v.end(), v1[i]);
        
    }
    for(ll i=0;i<n1;i++){
        for(ll j=0;j<n1;j++){
            if( (v2[i]>=v1[j]) and (v2[j]>=v1[i]) ) {
                count1++;
            }
        }
        
    }

    cout<<count1<<"\n";

    }
   
}

/*
        for(ll j=0;j<n1;j++){
            cout<<v[i]<<" "<<v[j]<<"\n";
            cout<<count_occurrences(v1, n, x);==v1[j   ])<<" "<<(count(v.begin(), v.end(), v1[j])==v1[i])<<"\n";
            if( count(v.begin(), v.end(), v1[i])==v1[j] and count(v.begin(), v.end(), v1[j])==v1[i] ) {
        //    cout<<v[i]<<" "<<count(v.begin(), v.end(), v1[i])<<" "<<v[j]<<" "<<count(v.begin(), v.end(), v1[j])<<"\n";
                count1++;
            }
        }

*/

/*
                    cout<<v1[i]<<" "<<v1[j]<<"\n";
                    if( (count(v1.begin(), v1.end(), v1[i])==v1[j]) and (count(v1.begin(), v1.end(), v1[j])==v1[i] ) ){
                        
                        count1++;
                    }

*/

