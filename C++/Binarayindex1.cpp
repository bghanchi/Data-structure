#include <bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define ll long long int
#define debug(c) cout<<c<<endl;
#define em emplace_back
#define pb push_back
#define mt make_tuple
#define mp make_pair
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;


int gcd(int x, int y)
{
     if(y==0){
         return x;
     }
     else{
         return gcd(y,x%y);
     }
}

int main()
{
    int t;
    cin>>t;
    vi arr(t+1);
    for(int i=1;i<=t;i++){
        cin>>arr[i];
    }

    cin>>t;
    while(t--){
        char choice;
        cin>>choice;
        int X,Y;
        cin>>X>>Y;


        if(choice== 'C')
        {
            ll result = 0;
            for(int p=X;p<=Y;p++)
            {
                for(int j=1;j<=arr[p];j++)
                {
                    result = result + gcd(j,arr[p]);
                }
            }
            cout<<result<<endl;
        }
        else
        {
            arr[X] = Y;
        }
    }
return 0;
}

