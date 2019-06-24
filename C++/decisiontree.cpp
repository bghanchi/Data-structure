#include<iostream>
#include<string.h>
using namespace std;
void desicions(int ,int *,int ,int );

int main(){
    int n;
     cin>>n;
    int a[n],s;
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    cin>>s;
    desicions(s,a,n,n);
    return 0;
}

void desicions(int s,int *p,int n,int size){
    int b=n/2;
    if(p[b]<s){
       desicions(s,p,(size+b),size);  
    }
    else if(p[b]>s){
       desicions(s,p,(size-b),size);  
    }
    else if(p[b]==s){
        cout<<"serach element is"<<p[b]<<"index is"<<b<<"\n";
    }
}
