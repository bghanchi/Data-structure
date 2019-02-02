#include<iostream>
#include<queue>
using namespace std;
struct node;
node* creation(struct node *,int );
void preorder( struct node *);
void depthheight(struct node *);

struct node{
    int data;
    node *left,*right;
}*root;
int maxx;
int count;
int main(){
    maxx=0;
    count=0;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int t;
       cin>>t;
       root=creation(root,t);
   }
        depthheight(root);
 
 return 0;  
}

node* creation(struct node *root,int num){
    if(root==NULL){
        root=new node;
        root->data=num;
        root->left=NULL;
        root->right=NULL;
    }
    else{
        if(num<root->data){
            root->left=creation(root->left,num);
        }
        else{
            root->right=creation(root->right,num);
        }
    }
return root;
}

void depthheight(struct node *root){
         if(root==NULL){
             cout<<"hello bharat kumar"<<"\n";
             if(maxx<count){
                 maxx=count;
                 cout<<maxx-1<<"\n";
             }
         }  

         else{
            count++;
             if(root)
             {
             depthheight(root->left);
                count--; 
             }
             if(root){
                 depthheight(root->right);
                count++;

             }
        
         }
}
/*
void preorder(struct node *root){
    if(root){
        cout<<root->data<<"\n";
        preorder(root->left);
        preorder(root->right);
    }
}
*/

/*
void printLevelOrder(struct node* root)
{
    int rear, front;
     queue<node *>q;
    struct node *temp_node = root;  
    while(temp_node)
    {
        printf("%d ", temp_node->data);

        if(temp_node->left)
            q.push(temp_node->left);

        if(temp_node->right)
            q.push(temp_node->right);

        temp_node = q.front();
        q.pop();
        cout<<"\n";
    }
}
*/