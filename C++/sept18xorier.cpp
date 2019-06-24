/*
User: bharat12
Problem: XORIER

*/

#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<n;i++)
#define mt make_tuple 
#define em emplace_back
#define present(c,x) ((c).fvind(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;
int prime(int n) { 
  if(n>2){
    int f=0;
   for (int i=2; i*i<=n; i++) 
    { 
        if(n%i==0){
            f++;
            break;
            
        }
    }
    if(f==0){
        return 1;
    }
    else{
        return 0;
    }

 }
 else if(n==2){
     return 1;
 }
  else {
   return 0;  
  }
 

}
 
 int findPrimePair(int i1,int j1,int n) { 
    int k=n/2;
    
    for (int i=k; i<=n; i++) 
    { 
        if ((prime(i) and prime(n-i) ) and (i%2==(n-i)%2)) 
        { 
            return 1;
            break; 
        }
    }
    return 0; 
} 


int main(){ 
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vi v,v1;
    int i,j;

    tr(i,0,n){
            int j;
            cin>>j;
            if(j%2==0){
               v.push_back(j);
            }
            else{
                v1.push_back(j);
            }
    }
    int count=0;

    tr(i,0,v.size()){
        tr(j,i+1,v.size()){
            int a=v[i]^v[j];
            if(a%2==0 and a>2){
             count+=1;
            }
        }
    }
    tr(i,0,v1.size()){
        tr(j,i+1,v1.size()){
            int a=v1[i]^v1[j];
            if(a%2==0 and a>2){
             count+=1;
            }
        }
    }

    cout<<count<<"\n";


    }
 }

    //findPrimePair(v[i],v[j],v[i]^v[j]); 
              
//             count+=findPrimePair(v[i],v[j],v[i]^v[j]); 
//             cout<<count<<"\n";

    //findPrimePair(v[i],v[j],v[i]^v[j]); 
              
//             count+=findPrimePair(v[i],v[j],v[i]^v[j]); 
//             cout<<count<<"\n";
 
