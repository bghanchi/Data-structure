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

ll f=1000001;
vi v(1000001);
vi arr(1000001);

int segmenttree(ll n,ll low,ll high){
    if(low==high){
             arr[n]=v[low];
             return arr[n];
    }
    else if(low>high){
        return 0;
    }
    else{
        ll mid=(low+high)/2;
       return arr[n]=segmenttree(2*n,low,mid)+segmenttree(2*n+1,mid+1,high);
    }
}


int range_query(ll n, ll low,ll high,ll l,ll r){
    if(l<=low and r>=high){
        return arr[n];
    }
    else if(high<l or low>r){
        return 100000;
    }
    else{
        ll mid=(low+high)/2;
        return min(range_query(2*n,low,mid,l,r),range_query(2*n+1,mid+1,high,l,r));
    }

} 

int segmenttree_minimum(int n,int low, int high){
    if(low==high){
        arr[n]=v[low];
    }
    else{
        ll mid=(low+high)/2;
        segmenttree_minimum(2*n,low,mid);
        segmenttree_minimum(2*n+1,mid+1,high);
        arr[n]=min(arr[2*n],arr[2*n+1]);
    }
}


void update(ll n,ll low,ll high,ll value,ll index){
    if(low==high){
//        cout<<low<<" "<<high<<" "<<n<<endl;
        arr[n]=value;  
     //   return arr[n];
    }
    else{
        ll mid=(low+high)/2;
        if(mid<index){
            low=mid+1;
            update(2*n+1,low,high,value,index);
        }
        else{
            high=mid;
            update(2*n,low,high,value,index);
        }
        arr[n]=min(arr[n*2],arr[n*2+1]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    int n,t;
    cin>>n>>t;
//    vi v(n+1,0),arr(2*n+1);

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    segmenttree_minimum(1,1,n);

    while(t--){
        char a;
        int l,r;
        cin>>a>>l>>r;
        if(a=='q'){
        cout<<range_query(1,1,n,l,r)<<endl;
        }
        else{
        update(1,1,n,r,l); 
        }
    }

}



/*   

//    cout<<endl;
//    cout<<range_query(1,1,n,1,4)<<endl;

//        arr[n]=arr[2*n]+arr[2*n+1];
//        cout<<"Hello Bharat Kumar"<<endl;
//        cout<<arr[n*2]<<" "<<arr[n*2+1]<<endl;
//        f=min(arr[n*2],arr[n*2+1]);
//        return arr[n];

    while(t--){
    //    ll value,index;
    //    cin>>value>>index;
  //      update(arr,1,1,n,value,index);
          ll l,r;
          cin>>l>>r;
//          range_query(1,1,n,l,r);
          cout<<f<<endl;

          for(int i=1;i<2*n;i++){
              cout<<arr[i]<<" "; 
          }


    }
}

*/

/*
        for(auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
*/


/*

       for(auto i:arr){
           cout<<i<<" ";
       }
       cout<<endl;

*/

/*
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<arr[i]<<endl;
    }
*/
