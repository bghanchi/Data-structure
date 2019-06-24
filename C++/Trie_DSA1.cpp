#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(x,n) for(int i=x;x<n?i<n:i>=n;x<n?i++:i--)
#define ll long long int
#define pb push_back
#define f first
//  #define s second
#define em emplace_back
#define mt make_tuple
#define mp make_pair
#define debug(c) cout<<c<<endl;
#define find(v,x)  find(all(v),x)!=v.end()


using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;
typedef map<char,ll>mi;


struct Trie{
    Trie *children[27];
    int num;
    bool endofword;
};

Trie* Node(){
    Trie* node=new Trie();
    for(int i=0;i<27;i++){
        node->children[i]=NULL;
    }
    node->endofword=false;
    node->num=-1;
    return node;
}

void insert(Trie *root,string s,int  num){
    Trie* node=new Trie();
    node=root;

    for(int i=0;i<s.size();i++){
        int index=s[i]-'a';
        if(!node->children[index]){
            node->children[index]=Node();
            node->endofword=true;
            node=node->children[index];
            node->num=num;
        }
        else{
            node=node->children[index];
            if(node->num<num){
//                cout<<s<<" "<<node->num<<" "<<num<<endl;
                node->num=num;
            }

        }
//        cout<<node->ch<<" ";
    }
}

void search(Trie *root,string s1){
    Trie *node=new Trie();
    node=root;
    int count=0;
    int value=-1;
    for(int i=0;i<s1.size();i++){
        int index=s1[i]-'a';
        if(node->children[index]!=NULL){
            node=node->children[index];
            value=node->num;
            count=i;
        }
        else{
            break;
        }
    }
    
    if(count+1>=s1.size()){
     cout<<value<<endl;
    }
    else{
        cout<<-1<<endl;
    }

//    cout<<count+1<<endl;
}
int main(){
    Trie* root=Node();
//    cout<<root->children[0]<<endl;
    int n,t;
    cin>>n>>t;
    while(n--){
        string s;
        int num;
        cin>>s>>num;
        insert(root,s,num);

    }
    while(t--){
        string str;
        cin>>str;
        search(root,str);
    }
}

/*
    if(count+1>=s1.size() and !node->endofword){
        cout<<"string find"<<endl;
    } 
    else{
        cout<<"string not find"<<" "<<count+1<<endl;
    }

*/

/*

    for(int i=0;i<n;i++){
        char a; int b;
        cin>>a>>b;
        m.insert({a,b});
    }

    for(auto i:m){
        cout<<i.f<<" "<<i.s<<endl;
    }


*/