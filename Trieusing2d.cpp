#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define ll long long int
#define em emplace_back
#define pb push_back
#define mt make_tuple
#define mp make_pair

using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

using namespace std;

const int N = 1e5 + 100;

int n, k, nxt = 1;
vii nod(N,vi(27,-1));
bool win[N], los[N];
string s[N];

void build( string s ){
	int i = 0, v = 0;
	while( i <s.size() ){
        int t=s[i]-'a';
		if( nod[v][t] == - 1 ){
            cout<<v<<" "<<t<<" "<<nod[v][t]<<" "<<nxt<<endl;
  			v = nod[v][t] = nxt++;
//            cout<<v<<" "<<int(s[i])<<" "<<nod[t][int(s[i])]<<endl;
//            cout<<i<<" "<<nxt<<endl;
        }
		else{
            cout<<v<<" "<<t<<" "<<nod[v][t]<<" "<<nxt<<endl;
			v = nod[v][t];            
        }

        i+=1;
             
	}
}

int main()
{ //    next=1;
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
 //   count++;
    while(t--){
        string s;
        cin>>s;   
        build(s);
    }

    return 0;
}