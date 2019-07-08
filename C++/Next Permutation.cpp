//problem link->https://leetcode.com/problems/next-permutation/

#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define ll long long int
#define debug(c) cout<<c<<endl;
#define pb push_back
#define em emplace_back
#define mt make_tuple
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;


void nextPermutation(vi &v) {
    int n=v.size();
    int i,j,k,f=0;

    for(i=0;i<n-1;i++)
    {
        if(v[i]<v[i+1]){
            f++;
            j=i;
        }
    }

    if(f==0){
        sort(v.begin(),v.end());
    }
    else
    {
        for(i=j+1;i<n;i++)
            {
                if(v[j]<v[i]){ k=i;}
            }
        swap(v[j],v[k]);
        reverse(v.begin()+j+1,v.end());
    }


}

int main(){
    ios_base::sync_with_stdio(false);
    ll n;
    cin>>n; 
    vi v(n);

    for(int i=0;i<n;i++){
       cin>>v[i];
    }

    nextPermutation(v);



}


/*
    int i = v.size() - 1;
    while (i > 0 && v[i - 1] >= v[i]) {
        i--;
    }

    if (i<=0) {
        sort(v.begin(),v.end());
    }
    else{
    int j = v.size() - 1;

    while (v[j] <= v[i - 1]) {
        j--;
    }

    swap(v[i],v[i-1]);

    j = v.size() - 1;

    while (i < j) {
        swap(v[i],v[j]);
        i++;
        j--;
    }

   }
        
    for(auto i:v){
        cout<<i<<" ";
    }



*/


/*
    for(auto i:v1){
        cout<<i<<" ";
    }
    ll mid=(n+m)/2
    cout<<


*/