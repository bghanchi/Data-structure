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

ll mod=1e9+7;


int gcd(int a,int b){
    if(b==0){
       return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    ll a=0,b=0,c=2;
    a=b+=c++;
    cout<<a<<" "<<b<<" "<<c<<endl;

}

/*


    for(int i=1;i<=n;i++){
        int x=i;
        int sum=0;
        for(int j=1;j<=x;j++){
            sum+=gcd(j,x);
        }
        arr[i]=sum%mod;
    }

    for(int i=1;i<=n;i++){
        cout<<i<<" "<<arr[i]<<endl;
    }


*/

/*
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
//    cout<<*v.end()<<endl;
//      cout<<v.back()<<endl;
     vi v1(all(v));
     sort(all(v1));

     for(auto i:v1){
         cout<<i<<" ";
     }


*/

/*

    int n;
    cin>>n;
    vi v(n); 
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int key;
    cin>>key;
    update(v,key);

    for(auto i:v){
        cout<<i<<" ";
    }

*/