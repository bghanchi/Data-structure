/*
User: bharat12

Problem: MINDSUM

*/

#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;x<n?i<=n:i>=n;x<n?i++:i--)
#define em emplace_back
#define pb  push_back
#define mp  make_pair
#define itr iterator 
#define int1 long long 

using namespace std;

typedef long long ll;
typedef vector<int>vi;
typedef pair<int1,int1> pii;


int1 x,y,z;

int1 digitsum(int1 x)
{
	int res=0;
	while(x)
	{
		res+=x%10;
		x/=10;
	}
	return res;
}

pii mindsum(int1 x,int1 y)
{
	if(y>21){
		return mp(x,y);
    }
    else{    
       return min(mp(x,y),min(mindsum(x+z,y+1),mindsum(digitsum(x),y+1)));
    }
}

int main()
{     
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>z;
		pii res=mindsum(x,0);
		cout<<res.first<<" "<<res.second<<"\n";
	}
	return 0;
}