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
    Node *next;
}*root=NULL;

Node* addNode(Node *root,ll value){
    
    if(root==NULL){
        root=new Node();
        root->value=value;
        root->next=NULL;
    }
    else{
        root->next=addNode(root->next,value);
    }

    return root;
}


void show(Node *root){
    if(root!=NULL){
        cout<<root->value<<" ";
        show(root->next);
    }
}

void deleteNode(Node *root,ll value){
    if(root!=NULL){
        if(root->next->value==value){
            root->next=root->next->next;
        }
        else{
//            cout<<root->value<<" ";
            deleteNode(root->next,value);
        }
    }

}

int main()
{
    ISRO; 
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vi v(n);

    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    for(ll i=0;i<n;i++){
       root=addNode(root,v[i]);
    }

//  show(root);
 
    ll key;
    cin>>key;
    if(root->value==key){
        root=root->next;
    }
    else{
        deleteNode(root,key);
    }

    show(root); 
    cout<<endl;

   root=NULL;
    }

return 0;
}

