/*
long long oct
User: bharat12
Problem: BITOBYT 
Contest: OCT18B
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;x<n?i<=n:i>=n;x<n?i++:i--)
#define forall(it,a) for(typeof(a.begin()) it=a.begin();it!=a.end();it++)
#define mt make_tuple
#define em emplace_back
#define pb push_back
#define pf push_front
#define sz(a) a.length()
#define mp make_pair
#define find(v,a) v.find(a)
#define ff first;
#define ss second;
#define ll long long int
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;
typedef tuple<int,int>ti;

int main(){
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
   ll  bits=1,nibble=0,byte=0;
   ll k=0;
//    bits=max(1,j*2);  
    for(ll i=1;i<n;i++){
        k++;
        if(bits!=0 and k>=2){
            nibble=bits;
            bits=0;
            k=0;
        }
        else if(nibble!=0 and k>=8){
            byte=nibble;
            nibble=0;
            k=0;
        }
        else if(byte!=0 and k>=16){
            bits+=(byte)*2;
            byte=0;
            k=0;
        }
    }
    cout<<bits<<" "<<nibble<<" "<<byte<<"\n";

}

}