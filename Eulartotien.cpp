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


int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;

    int result=n;
    for(int p=2;p*p<=n;p++){
        if(n%p==0)
            while(n%p==0)
                n/=p;
            result-=result/float(p);
    }
    cout<<n<<endl;     
    if(n>1){
        result-=result/float(n);
    }

    cout<<result<<endl;
}