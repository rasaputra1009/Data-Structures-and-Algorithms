void findPermutations(int l,string &s,vector<string> &ans)
{
    if(l==s.size())
    {
        ans.push_back(s);
        return;
    }
    for(int i=l;i<s.size();i++)
    {
        swap(s[l],s[i]);
        findPermutations(l+1,s,ans);
        swap(s[l],s[i]);
    }
}

vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    findPermutations(0,s,ans);
    return ans;
}