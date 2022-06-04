#include <bits/stdc++.h> 
void changeMatrixToZeroes(int i,int j,int rows,int cols,vector<vector<int>> &matrix)
{
    for(int u=0;u<cols;u++)
    {
        matrix[i][u]=0;
    }
    for(int v=0;v<rows;v++)
    {
        matrix[v][j]=0;
    }
}
void setZeros(vector<vector<int>> &matrix)
{
    int cols=matrix[0].size();
    int rows=matrix.size();
    vector<pair<int,int>> zeroPos;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(matrix[i][j]==0)
            {
                zeroPos.push_back(make_pair(i,j));
            }
        }
    }
    for(int i=0;i<zeroPos.size();i++)
    {
        changeMatrixToZeroes(zeroPos[i].first,zeroPos[i].second,rows,cols,matrix);
    }
}