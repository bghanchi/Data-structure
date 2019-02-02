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
using namespace std;
typedef long long int ll;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;
typedef tuple<int,int,int>ti;
typedef pair<ll,ll>pii;


int digitsum(int n){
     int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int Getmid(int a,int b){
    return (a+b)/2;
}
int segment(const vi &v,int st,int ed){
    if(st==ed){
//        cout<<v[st]<<"\n";
         return v[st];
    }
    else{
        int mid=Getmid(st,ed);
//        cout<<mid<<"\n";
      return min(segment(v,st,mid),segment(v,mid+1,ed));

    }
}
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    vi v(n);
    int i;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<segment(v,0,n-1)<<"\n";

}

