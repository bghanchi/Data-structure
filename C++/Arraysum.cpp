#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int a[n],sum=0;
    for(long long int i=0;i<n;i++){
        ll t;
        cin>>t;
        sum+=t;
    }
    cout<<sum<<"\n";
return 0;    
}