/*
User: bharat12
Problem: CHEFADV
Contest: SEPT18B

*/
#include<bits/stdc++.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;i<n;i++)
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;

int main(){
    int t;
    cin>>t;
    while(t--){
    int N,M,X,Y,P=1,K=1;
    cin>>N>>M>>X>>Y;
    int check=0;
    while(1){
        if(N<100 and M<100){

        if(P==N and K==M){
             cout<<"Chefirnemo"<<"\n";
             break;
        }

        else if(P>N or K>M){
             cout<<"Pofik"<<"\n";
             break;

        }
        else if(P<N and K<M and (N-P==1 and M-K==1)){
             cout<<"Chefirnemo"<<"\n";
             break;

        }
        else if(P<N and (K==M or K==M-1)){
             P=P+X;

        }
        else if((P==N or P==N-1) and K<M ){
             K=K+Y;
        }
        else{
                P+=X;
                K+=Y;
            
        }

        }

   else if(N>100 and M<100){
       N-=X*((N/X)-1);
//       cout<<N<<"\n";
         if(P==N and K==M){
             cout<<"Chefirnemo"<<"\n";
             break;
        }

        else if(P>N or K>M){
             cout<<"Pofik"<<"\n";
             break;

        }
        else if(P<N and K<M and (N-P==1 and M-K==1)){
             cout<<"Chefirnemo"<<"\n";
             break;

        }
        else if(P<N and (K==M or K==M-1)){
             P=P+X;

        }
        else if((P==N or P==N-1) and K<M ){
             K=K+Y;
        }
        else{
                P+=X;
                K+=Y;
            
        }      
   }

   else if(N<100 and M>100){
       M-=Y*((M/Y)-1);
         if(P==N and K==M){
             cout<<"Chefirnemo"<<"\n";
             break;
        }

        else if(P>N or K>M){
             cout<<"Pofik"<<"\n";
             break;

        }
        else if(P<N and K<M and (N-P==1 and M-K==1)){
             cout<<"Chefirnemo"<<"\n";
             break;

        }
        else if(P<N and (K==M or K==M-1)){
             P=P+X;

        }
        else if((P==N or P==N-1) and K<M ){
             K=K+Y;
        }
        else{
                P+=X;
                K+=Y;
            
        }      
   }
   else{
       N-=X*((N/X)-1);
       M-=Y*((M/Y)-1);
         if(P==N and K==M){
             cout<<"Chefirnemo"<<"\n";
             break;
        }

        else if(P>N or K>M){
             cout<<"Pofik"<<"\n";
             break;

        }
        else if(P<N and K<M and (N-P==1 and M-K==1)){
             cout<<"Chefirnemo"<<"\n";
             break;

        }
        else if(P<N and (K==M or K==M-1)){
             P=P+X;

        }
        else if((P==N or P==N-1) and K<M ){
             K=K+Y;
        }
        else{
                P+=X;
                K+=Y;
            
        }      
       
   }

    }

    }
}    