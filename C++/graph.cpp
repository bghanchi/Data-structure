#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
struct node;
void addEdge(vector<node>,int,int);
struct node{
    int a;
    node *t;
};

int main()
{
    int n;
    cin>>n;
    vector<struct node>a[n];
    addEdge(a, 0, 1);
    addEdge(a, 0, 4);
    addEdge(a, 1, 2);
    addEdge(a, 1, 3);
    addEdge(a, 1, 4);
    addEdge(a, 2, 3);
    addEdge(a, 3, 4);
    hello();
     return 0;
}

void addEdge(vector<node>array[],int i,int value){
     struct node *p;
     p=new node();
    p->a=value;
    array[i].push_back(p);
}
