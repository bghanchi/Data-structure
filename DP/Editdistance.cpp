#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define pb push_back
#define em emplace_back
#define ll long long int
#define mp make_pair
#define isro ios_base::sync_with_stdio(false);
#define debug(c) cout<<c<<endl;
#define find(v,x) find(all(v),x)!=v.end()
using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

int MAXN=100;
int MAXW=100;
ll n,k;
vii v(100,vi(100,-1));


int main(){
    isro;   
    ll t;
    cin>>t;

    while(t--){
        string s,s1;
        cin>>s>>s1;
        ll n=s.length();
        ll m=s1.length();
        vii v(n+1,vi(m+1,0));

        for(ll i=1;i<=n;i++)
            v[i][0]=i;
        

        for(ll i=1;i<=m;i++)
            v[0][i]=i;
        

        ll maxx=0;           
       
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
               if(s[i-1]==s1[j-1]){
                   v[i][j]=min(v[i-1][j-1],min(v[i][j-1],v[i-1][j]));
               }
               else{
                   v[i][j]=min(v[i-1][j-1],min(v[i][j-1],v[i-1][j]))+1;                   
               }
            }
        }

//       cout<<v[n][m]<<endl;


        for(ll i=0;i<=n;i++){
            for(ll j=0;j<=m;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }

        

    }

}


/*
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                   v[i][j]=s[i-1]==s1[j-1]?min(v[i-1][j-1],min(v[i][j-1],v[i-1][j])):min(v[i-1][j-1],min(v[i][j-1],v[i-1][j]))+1;
//                   maxx=max(maxx,v[i][j]);
            }
        }
        

*/
/*
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
               if(s[i-1]==s1[j-1]){
                   v[i][j]=min(v[i-1][j-1],min(v[i][j-1],v[i-1][j]));
               }
               else{
                   v[i][j]=min(v[i-1][j-1],min(v[i][j-1],v[i-1][j]))+1;                   
               }
            }
        }



*/