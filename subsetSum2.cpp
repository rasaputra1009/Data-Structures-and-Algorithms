#include <algorithm>
void findUniqueSubsets(int index,vector<int> temp,vector<vector<int>> &ans,vector<int> arr,int n)
{
    ans.push_back(temp);
    for(int i=index;i<n;i++)
    {
        if(i==index || arr[i]!=arr[i-1])
        {
        temp.push_back(arr[i]);
        findUniqueSubsets(i+1,temp,ans,arr,n);
        temp.pop_back();
        }
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> temp;
    findUniqueSubsets(0,temp,ans,arr,n);
    return ans;
}