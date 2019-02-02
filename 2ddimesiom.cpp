#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        int t;
        cin>>t;
        v[i].push_back(t);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
 
 return 0;
}


/*
void mincost(int i,int j,int a[n][m]){
    cout<<a[i][j];
}
*/


/*
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j]
        }
    }

*/


/*
void display(int n[3][2]);

int main()
{
    int num[3][2] = {
        {3, 4},
        {9, 5},
        {7, 1}

    };
    display(num);

    return 0;
}

void display(int n[3][2])
{

    cout << "Displaying Values: " << endl;
    for(int i = 0;  i < 3; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            cout << n[i][j] << " ";
        }
    }
}
*/