#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<=n;i++)
#define backtr(i,x,n) for(int i=x;i>=n;i++)
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;

int isprime(int n){
    if(n<=1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        int f=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            f++;
        }
    }
    if(f==0){
//        cout<<"hello bharat kumar"<<"\n";
        return 1;
    }
    else{
//        cout<<"hai"<<"\n";
        return 0;
    }

    }
}


void diveded(int n){
    tr(i,1,n){
        int q;
        q=n/i;
        if(isprime(i) and isprime(q)){
            cout<<i<<" "<<q<<" "<<n<<"\n";
        }
        
    }

}



int main(){
      int n;
      cin>>n;
      cout<<isprime(n)<<"\n";
      tr(i,2,n){
        diveded(i); 
      }
}
