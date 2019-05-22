#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define f first
#define s second
#define em emplace_back
#define mt make_tuple
#define mp make_pair
#define debug(c) cout<<c<<endl;
#define find(v,x)  find(all(v),x)!=v.end()


using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;
typedef map<char,ll>mi;


struct node{
    map<char,node>ch;
    bool f=false;
}*root=NULL;

int main(){
    int n;
    cin>>n;
    mi m;
    char a;
    cin>>a;
    root=new node();
    node *t=new node();
    root->ch.insert({a,t});


}


/*

    for(int i=0;i<n;i++){
        char a; int b;
        cin>>a>>b;
        m.insert({a,b});
    }

    for(auto i:m){
        cout<<i.f<<" "<<i.s<<endl;
    }


*/