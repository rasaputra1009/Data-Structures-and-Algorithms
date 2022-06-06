void findSubsetsWithSumK(int index,vector<int> temp,vector<vector<int>> &ans,vector<int> arr,int n,int k)
{
    if(index>=n)
    {
        int u=0;
        for(int i=0;i<temp.size();i++)
        {
            u+=temp[i];
        }
        if(u==k)
        {
            ans.push_back(temp);
        }
        return;
    }
    temp.push_back(arr[index]);
    findSubsetsWithSumK(index+1,temp,ans,arr,n,k);
    temp.pop_back();
    findSubsetsWithSumK(index+1,temp,ans,arr,n,k);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> temp;
    findSubsetsWithSumK(0,temp,ans,arr,n,k);
    return ans;
}