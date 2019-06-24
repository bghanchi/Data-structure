#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int MAX = 500005;
const int MAX1 = 1000005;
const long long MOD = 1e9 + 7;
long long toti[MAX], totiS[MAX], A[MAX1], tree[MAX1],phi[MAX],p[MAX];

int total=0;

void compute_phi(int n) {
    for(int i = 1; i <= n; i++) phi[i] = i;

    for(int i = 2; i <= n; i++){
        if (phi[i] == i) { // prime number
//            cout<<i<<" "<<phi[i]<<endl;
            for(int j = i; j <= n; j += i) {
                phi[j] -= phi[j] / i;
//                phi[j] = mod(phi[j]);
            }
        }
    }
}

void compute_pillai(int n) {
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i) {
            int t=p[j];
 //           cout<<j<<" "<<phi[j]<<endl;
            p[j] += i * phi[j / i];
            cout<<t<<" "<<i<<" "<<phi[j/i]<<" "<<p[j]<<endl;

//            p[j] = mod(p[j]);
         }
         cout<<endl;
         if(total>1){
            break;             
         }
         total+=1;
    }

}

int main()
{
    int n, q, x, y;
    char c;
    long long ans = 0;
    cin>>n;
    compute_phi(n);
    compute_pillai(n);
/*
    for(int i=1;i<=n;i++){
          cout<<phi[i]<<" ";
    }
*/
}


/*
void compute()
{
    int i, j, k, ans;
    for(i = 0;i < MAX;++i)
        toti[i] = i;
    for(i = 2;i < MAX;++i)
    {
        if(toti[i] == i)
        {
            toti[i] = i - 1;
            for(j = 2*i;j < MAX;j += i)
                toti[j] -= (toti[j] / i);
        }
    }
    for(i = 1;i < MAX;++i)
    {
        for(j = i, k = 1;j < MAX;j += i, k++)
        {
            totiS[j] += i*toti[k];
        }
    }
}


*/