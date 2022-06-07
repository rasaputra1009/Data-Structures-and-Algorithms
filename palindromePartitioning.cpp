bool isPalindrome(string s)
{
    int l=0,r=s.size()-1;
    while(l<=r)
    {
        if(s[l++]!=s[r--])
        {
            return false;
        }
    }
    return true;
}
void findPartition(string s,vector<string> temp,vector<vector<string>> &ans)
{
    if(s.size()==0)
    {
        ans.push_back(temp);
        return ;
    }
    for(int i=0;i<s.size();i++)
    {
        string prefix=s.substr(0,i+1);
        string rest=s.substr(i+1);
        if(isPalindrome(prefix))
        {
            temp.push_back(prefix);
            findPartition(rest,temp,ans);
            temp.pop_back();
        }
    }
}
vector<vector<string>> partition(string s) 
{
    vector<vector<string>> ans;
    vector<string> temp;
    findPartition(s,temp,ans);
    return ans;
}