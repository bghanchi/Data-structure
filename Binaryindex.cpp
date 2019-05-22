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

vi v(1000000);
vi arr(1000000);

const int MAX = 500005;
const int MAX1 = 1000005;
const long long mod = 1e9 + 7;
long long toti[MAX], totiS[MAX], A[MAX1], tree[MAX1],phi[MAX],p[MAX];

int total=0;

void compute_phi(int n) {
    for(int i = 1; i <= n; i++) phi[i] = i;

    for(int i = 2; i <= n; i++){
        if (phi[i] == i) { // prime number
//            cout<<i<<" "<<phi[i]<<endl;
            for(int j = i; j <= n; j += i) {
                phi[j] -= phi[j] / i;
//                phi[j] = mod(phi[j]);
            }
        }
    }
}

void compute_pillai(int n) {
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i) {
            int t=p[j];
 //           cout<<j<<" "<<phi[j]<<endl;
            p[j] += i * phi[j / i];
//            cout<<t<<" "<<i<<" "<<phi[j/i]<<" "<<p[j]<<endl;

//            p[j] = mod(p[j]);
         }
         cout<<endl;
         if(total>1){
            break;             
         }
         total+=1;
    }

}


void upgrade(int n,int x,int val){
    int t=arr[x]; 
    arr[x]=val;            
//    degub("Hello");   
    for(int i=x+(x&-x);i<=n;i=i+(i&-i)){
//        cout<<arr[i]<<" "<<i<<" "<<val<<endl;
        arr[i]+=val-t;
    }
}

int firstprefix(int x,int y){
    int sum=0; 
    for(int i=y;i>=x;i=i-(i&-i)){
        sum+=arr[i];
    }
    return sum;
}


int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    compute_phi(n);
    compute_pillai(n);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        arr[i]=p[x]%mod;
    }

    for(int i=1;i<=n;i++){
        arr[i+(i&-i)]+=arr[i];
    }


    int t; 
    cin>>t;
    while(t--){
        char choice;
        int index,val;
        cin>>choice;
        if(choice=='U'){
            cin>>index>>val;
            int sum=0;
            upgrade(n,index,p[val]);

        }
        else{
            cin>>index>>val;
            cout<<firstprefix(index,val)<<endl;
        }
    
    }
}



/*
            for(int i=1;i<=n;i++){
                cout<<arr[i]<<" ";
            }
*/


/*

            int sum=0;
            for(int i=index;i<=val;i++){
                sum+=arr[i];
            }
            cout<<sum<<endl;

*/

/*
int range_sum(int x,int y){
    int sum=0;
    for(int i=x;i<=y;i=i+(i&-i)){
        cout<<i<<" "<<arr[i]<<endl;
        sum+=arr[i];
    }
    return sum%mod;
}
*/

/*
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<arr[i]<<endl;
    }
*/





/*

    while(t--){
        int choice,index,val;
        cin>>choice;
        if(choice==1){
            cin>>index>>val;
            upgrade(n,index,val);
        }
        else{
            cin>>index;
            cout<<firstprefix(index)<<endl;
        }
    
    }


*/




/*
        for(int i=1;i<=n;i++){
             cout<<i<<" "<<arr[i]<<endl;
        }

//        cout<<i<<" "<<(i+i&-1)<<" "<<v[i]<<endl;


*/