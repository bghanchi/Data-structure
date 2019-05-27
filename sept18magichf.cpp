/*
long long sept
User: bharat12
Problem: MAGICHF 
Contest: SEPT18B 
*/


#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<n;i++)
#define mt make_tuple 
#define em emplace_back
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,pos,s;
    cin>>n>>pos>>s;
    vi v(n+1);
    while(s--){
        int i,j;
        cin>>i>>j;
        if(j==pos ){
            pos=i;
        }
        else if(i==pos){
            pos=j;
        }
//        cout<<pos<<"\n";
    }
    cout<<pos<<"\n";

    }
}