// You are given an integer N. Your task is to return a 2-D ArrayList containing the pascal’s triangle till the row N.
// A Pascal's triangle is a triangular array constructed by summing adjacent elements in preceding rows. Pascal's triangle contains the values of the binomial coefficient. For example in the figure below.


#include <bits/stdc++.h> 
#define ll long long int
vector<vector<ll>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<ll>> pascalMat(n+1,vector<ll>(n+1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || j==i)
            {
                pascalMat[i][j]=1;
            }
            else
            {
                pascalMat[i][j]=pascalMat[i-1][j-1]+pascalMat[i-1][j];
            }
        }
    }
    vector<vector<ll>> ans;
    for(int i=1;i<=n;i++)
    {
        vector<ll> temp;
        for(int j=1;j<=i;j++)
        {
            temp.push_back(pascalMat[i][j]);
        }
        ans.push_back(temp);
    }
    return ans;
}
