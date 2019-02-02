#include<bits/stdc++.h>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<tuple>
#include<stack>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<=n;i++)
using namespace std;
typedef vector<int>vi;  
typedef vector<vi>vii;
typedef pair<int,int>pi;
typedef vector<pi>pii;
struct node;
struct node{
    int num;
    node *left,*right;
}*root=NULL;

node* creation(struct node *root,int num){
    if(root==NULL){
        root=new node;
        root->num=num;
        root->left=NULL;
        root->right=NULL;
    }
    else{
        if(num<root->num){
            root->left=creation(root->left,num);
        }
        else{
            root->right=creation(root->right,num);
        }
    }
return root;
}

void preorder2(struct node *root){
    stack<node*>q;
    stack<node*>q1;

    q.push(root);
    //s.push(root);

    //s.push(root);
    while(!q.empty()){
        node *t;
        t=q.top();
        q1.push(t);
//        cout<<t->num<<"\n";
        q.pop();
        if(t->left)
           q.push(t->left);
        if(t->right)
           q.push(t->right);
//        q.push(q1.top());
//        q1.pop();   
        
    }
    while(!q1.empty()){
        cout<<q1.top()->num<<" ";
        q1.pop();
    }

}

int main(){
   int n;
   cin>>n;
   tr(i,1,n){
       int num;string s;
       cin>>num;
       root=creation(root,num);
   }
    
        preorder2(root); 
}


