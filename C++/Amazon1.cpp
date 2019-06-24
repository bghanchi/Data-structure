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
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vii v(n+1,vi(m+1));
     
        bool f=true;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int a,count=0;
                cin>>a;
                if(i-1>0)
                    count+=1;
                if (i+1<=n)
                    count+=1;
                if (j-1>0)
                    count+=1;
                if (j+1<=m)
                    count+=1;
                
//                cout<<count<<" "<<a<<endl;
                if(count<=a){
                    f=false;
//                    cout<<f<<endl;
//                    cout<<"hello"<<endl;
//                    break;
                }                  

            }
        }

        if(f){
            cout<<"Stable"<<endl;
        }
        else{
            cout<<"Unstable"<<endl;
        }
    }

}

