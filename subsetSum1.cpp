void findSubSetSum(int index,vector<int> &res,vector<int> &ans,vector<int> num)
{
    if(index>=num.size())
    {
        int k=0;
        for(int i=0;i<res.size();i++)
        {
            k+=res[i];
        }
        ans.push_back(k);
        return ;
    }
    res.push_back(num[index]);
    findSubSetSum(index+1,res,ans,num);
    res.pop_back();
    findSubSetSum(index+1,res,ans,num);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans,res;
    findSubSetSum(0,res,ans,num);
    sort(ans.begin(),ans.end());
    return ans;
}