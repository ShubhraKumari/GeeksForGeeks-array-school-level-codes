//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n);

int main()
{
    int t;
    cin>>t;
    int a[M][M];
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        vector<vector<int>> b;
        b = transpose(a, n);
        for(int i=0;i < n;i++)
        {
            for(int j=0;j<n;j++){
                cout << b[i][j] << " ";
            }
        }
        cout<<endl;
    }
}



// } Driver Code Ends


vector<vector<int>> transpose(int a[][M], int n)
{
    // Code here
    vector<vector<int>> v(M,vector<int>(M));
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
           v[i][j]=a[j][i];
        }
    }
    return v;
}
