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
