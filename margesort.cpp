#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define pb push_back
#define mk make_pair
#define em emplace_back
#define tr(i,x,n) for(int i=x;x<n?i<n:i>n;x<n?i++:i--)
using namespace std;
typedef long long int ll;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

void marge(vi &v,ll mid,ll j){
    ll end=mid+1;
    ll start=0;
    while(start!=end and end<=j){

        if(v[start]>v[end]){
            ll t=v[start];
            v[start]=v[end];
            v[end]=t;
            start++;
        }
        else{
            start++;
        }

     }


}


void split(vi &v,ll i,ll j){
    if(i<j){
        if(i+1==j){
            if(v[i]>v[j]){
                cout<<v[i]<<" "<<v[j]<<"\n";
                ll t=v[i];
                v[i]=v[j];
                v[j]=t;
            }
         }
    else{
        ll mid=(i+j)/2;
        split(v,i,mid);
        split(v,mid+1,j);
        marge(v,mid,j);
    }
 }
} 




int main(){
   ios_base::sync_with_stdio(false);
   ll n;
   cin>>n;
   vi v(n);
   ll i;
   tr(i,0,n){
       cin>>v[i];
   }

   split(v,0,n-1);
   for(auto i:v){
       cout<<i<<" ";
   }
}


