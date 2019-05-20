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
#define mod 1000000007
char s[1010];

bool checkletter(int i,int l)
{
	if(i<0||i>=l)
		return 0;
	return 1;
}

using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;


int main()
{

	ll length;
	cin>>s;
	length=strlen(s);
	ll total=1;
	for(ll i=0;i<length;++i)
	{
		ll c=0;
		map<char,ll> mapp;
		mapp[s[i]]=1;
		if(checkletter(i-1,length)){
			mapp[s[i-1]]=1;
		}

		if(checkletter(i+1,length)){
			mapp[s[i+1]]=1;
		}

		for(auto it:mapp){
           			c++;
		}
		total=(total*c)%mod;
	}
	cout<<total<<endl;

}