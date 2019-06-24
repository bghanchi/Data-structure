#include <bits/stdc++.h>
#include <algorithm>
#include<string.h>
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(c) c.begin(),c.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
#define flush fflush(stdout) 
#define primeDEN 727999983
#define show(s) cout<<s<<"\n";
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vi v(n);
    int i;
    rep(i,n){
        cin>>v[i];
    }
    while(t--){
        int s;
        cin>>s;
    int count=0,l=0,r=n-1;c
    while(l<=r){
         count++;
        int mid=l+(r-l)/2;
        if(v[mid]==s){
            cout<<count<<" "<<s<<"\n";
            break;
        }
        else if(s<v[mid]){
            r=mid-1;
        }
        else{
          l=mid+1;  
        }

     }
  }
    
}
