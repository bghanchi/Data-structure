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
        int n;
        cin>>n;
        vi a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        int d1=(a[2]-a[1])/1;
        int d2=(a[3]-a[1])/2;
        int d3=(a[4]-a[1])/3;

        cout<<d1<<" "<<d2<<" "<<d3<<endl;
        if((d1==d2) and (d1==d3)){
           for(int i=0;i<n;i++){
               cout<<a[1]+(i)*d1<<" ";
           }
        }
        else if((d1==d2) and (d1!=d3)){
//            cout<<"d2==d2"<<endl;
           for(int i=0;i<n;i++){
               cout<<a[1]+(i)*d1<<" ";
           }
        }

        else if((d1==d3) and d1!=d2){
//            cout<<"d2==d2"<<endl;
           for(int i=0;i<n;i++){
               cout<<a[1]+(i)*d1<<" ";
           }

        }
        else if((d2==d3) and (d1!=d2)){
            cout<<"d2==d2"<<endl;
           for(int i=0;i<n;i++){
               cout<<a[1]+(i)*d2<<" ";
           }

        }
        else{
           int d=a[3]-a[2];
           a[1]=a[2]-d;
           cout<<d<<endl;
           for(int i=0;i<n;i++){
               cout<<a[1]+(i)*d<<" ";
           }
 
        }

       cout<<endl;
    }

}

