#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(n,x) for(int i=x;x<n?i++:i--;x<n?i<n:i>=n;)
#define ll long long int
#define pb push_back
#define em emplace_back
#define mt make_tuple
#define ISRO    ios_base::sync_with_stdio(false);

using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;


struct Node{
    int value;
    Node *pre,*next;
}*root=NULL;

struct Node *lastnode=NULL;
Node* CreateCircular(Node* root,ll value){

    if(root==NULL){
        root=new Node();
        root->value=value;
        root->next=NULL;
        root->pre=NULL;
        lastnode=root;
//        cout<<root->value<<" ";

    }

    else{
//        cout<<root->value<<" ";
        root->next=CreateCircular(root->next,value);
        root->next->pre=root;
    }

return root;
}

void show(Node *root,ll value){
    if(root->value!=value){
        cout<<root->value<<" ";
        show(root->next,value);
    }
}

int main(){
    ISRO;
    ll n;
    cin>>n;

    vi v(n);
    
    for(ll i=0;i<n;i++){
        cin>>v[i];
        root=CreateCircular(root,v[i]);
//        firstnode=root;
    }

    root->pre=lastnode;
    lastnode->next=root;
//    cout<<root->pre->value<<endl;
    show(root->next,root->value);



}