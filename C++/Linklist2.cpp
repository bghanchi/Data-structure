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
#define debug(c) cout<<c;

using namespace std;
typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;

struct Node{
    int value;
    Node *next;
}*root=NULL,*firstnode=NULL,*lastnode=NULL;



void show(Node *root){

    while(root!=NULL){
        cout<<root->value<<" ";
        root=root->next;
    }

}

bool checkpalindrom(Node *first,Node *last){
    ll f=0;
    while(first!=last){
        if(first->value!=last->value){
            f+=1;
            break;
        }
//        cout<<first->value<<" "<<last->value<<endl;
        first=first->next;
        last=last->next;

    }

    if(f==0){
        return true;
    }
    else{
       return false;
    }

}
int main(){
    ll n;
    cin>>n;
    vi v(n);
    for(ll i=0;i<n;i++){
        ll value;
        cin>>value;
        if(i==0){
            root=new Node();
            root->value=value;
            root->next=NULL;
            lastnode=new Node();
            lastnode->value=value;
            firstnode=root;
        }
        else{
            Node *t=new Node();
            root->next=t;
            root=t;
            root->value=value;
            root->next=NULL;

            Node *t1=new Node();
            t1->next=lastnode;
            lastnode=t1;
            lastnode->value=value;
//            lastnode->next=NULL;

       }

    }








//    st.push(1);
//    cout<<*firstnode.size();

//    show(lastnode);

//    cout<<firstnode->value<<" "<<lastnode->value<<endl; 


    if(checkpalindrom(firstnode,lastnode)){
        cout<<"Palindrom"<<" ";
    }
    else{
        cout<<"Not Palindrom"<<" ";
    }

}


/*

    if(n%2!=0){

    while(firstnode!=NULL){
        if(count<n/2){
           st.push(firstnode->value);
           firstnode=firstnode->next;
           count+=1;
        }
        else if(cout>n/2){
          ll t=st.pop();
          if(t!=firstnode->value){
              cout<<"not palindrom"<<endl;
              f+=1;
              break;
          }  
          firstnode=firstnode->next;
          count+=1;
        }
    }

    }

    else{
        while(count<n){
            if(count<n/2){
            st.push(firstnode->value);
            firstnode=firstnode->next;
            count+=1;

            }
            else{
            ll t=st.pop();
            if(t!=firstnode->value){
                cout<<"not palindrom"<<endl;
                f+=1;
                break;
            }  
            firstnode=firstnode->next;
            count+=1;

            }
        }
        
    }



*/

/*

    ll count=0,f=0;
    
    stack<Node*>st;
    Node *root1=firstnode;

    while(root1!=NULL){
        st.push(root1);
        root1=root1->next;

    }


    while(!st.empty()){
        Node *t=st.pop();
        if(t->value!=firstnode->value){
            f+=1;
            break;
        }
        firstnode=firstnode->next;
    }

    cout<<f<<endl;

*/