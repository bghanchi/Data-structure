#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define pb push_back
#define em emplace_back
#define ll long long int
#define mp make_pair

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

int MAXN=100;
int MAXW=100;

int main(){
    ios_base::sync_with_stdio(false);
    int n, S;                                        //n &mdash; number of coin types, S &mdash; desired overall weight
    cin>>n>>S;
    int wgt[MAXN];                                   //array of coin weights (W); for example: {1, 3, 5};
    int mink[MAXW];                                  //array of DP results (k); look above for the example;
    
    for(int i=0;i<n;i++){
        cin>>wgt[i];
    }
    mink[0] = 0;                                   //base of DP: 0 weight can be achieved by 0 coins
    for (int P = 1; P<=S; P++) {                   //iterate through all the states
        int minres = 1000000000;                    
        for (int i = 0; i<n; i++) if (wgt[i] <= P) { //suppose that the coin with weight wgt[i] is the last
        int tres = mink[P , wgt[i]] + 1;           //the number of coins with the coin is greater by one
        if (minres > tres) minres = tres;          //choose the minimal overall number of coins among all cases
        }
        mink[P] = minres;                            //store the result in mink array
    }
    int answer = mink[S]; 
    cout<<answer<<endl;
}
