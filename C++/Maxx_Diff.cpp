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
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;

int maxdiff(vi &v) {
    int maxx=0;

    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++){
        maxx=max(maxx,abs(v[i]-v[i-1]));
    }

    return maxx;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;

    vi v(n,0);

    for(int i=0;i<n;i++)  cin>>v[i];

    cout<<maxdiff(v)<<endl;
 
}


/*
    int a1=-1e9,b1=-1e9,c1=-1e9,d1=-1e9;
    int a2=1e9,b2=1e9,c2=1e9,d2=1e9;
    int max1=0,max2=0;    

    for(int i=0;i<v.size();i++){
        a1 = max(a1,(v[i] + i));
        a2 = min(a2,(v[i] + i));

        b1=  max(b1,v[i] - i);
        b2 = min(b2,v[i] - i);

        c1 = max(c1,(-v[i]+i));
//        cout<<c1<<" "<<i<<" "<<(-v[i]+i)<<endl;
        c2 = min(c2,(-v[i]+i));

        d1 = max(d1,(-v[i]-i));
        d2 = min(d2,(-v[i]-i));

    }
    
//    cout<<d1<<" "<<d2<<endl;
     max1=max((a1-a2),(b1-b2));
     max2=max((c1-c2),(d1-d2));


    return max(max1,max2);

*/

/*
    for(auto i:v1){
        cout<<i<<" ";
    }
    ll mid=(n+m)/2
    cout<<


*/