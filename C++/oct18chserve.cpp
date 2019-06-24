/*
longchallege
Problem: CHSERVE
User: bharat12

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
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;
typedef tuple<int,int>ti;

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
    int p1,p2,k;
    cin>>p1>>p2>>k;
    int total=p1+p2;
    int n1=total/k;
    if(n1%2==0){
        cout<<"CHEF"<<"\n";
    }
    else{
        cout<<"COOK"<<"\n";
    }
 
  }

}