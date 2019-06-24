#include<bits/stdc++.h>
#define all(c) c.begin(),c.end()
#define ll long long int
#define em emplace_back
#define pb push_back
#define mt make_tuple
//#define mp make_pair
using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;

std::map<string , ll> mp;
std::map<string , ll>::iterator it;

int main()
{
    ll n,q,i,v;
    string s;
    cin>>n>>q;
    while(n--)
    {
        cin>>s>>v;
        ll l=s.length();
        string c;

        for(i=0;i<l;++i)
        {
            c+=s[i];
            cout<<c<<" "<<mp[c]<<endl;
            if(mp[c]==0)
                mp[c]=v;
            else
            {
                if(mp[c]<v)
                    mp[c]=v;
            }
            cout<<c<<" "<<mp[c]<<endl;

        }
    }
    string gg;
    return 0;
}

/*
    while(q--)
    {
        cin>>gg;
        if(mp[gg]==0)
         cout<<"-1\n";
        else
           cout<<mp[gg]<<"\n";
    }


*/