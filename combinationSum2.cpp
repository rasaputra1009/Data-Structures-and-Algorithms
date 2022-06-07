#include <algorithm>
void findCombinationSum2(int index,vector<int> res,vector<vector<int>> &ans,vector<int> arr,int n,int target)
{
        if(target==0)
        {
            ans.push_back(res);
            return ;
        }
    if(target<0) return;
    for(int i=index;i<n;i++)
    {
        if(i>index && arr[i]==arr[i-1]) continue;
        res.push_back(arr[i]);
        findCombinationSum2(i+1,res,ans,arr,n,target-arr[i]);
        res.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> res;
    findCombinationSum2(0,res,ans,arr,n,target);
    return ans;
}
