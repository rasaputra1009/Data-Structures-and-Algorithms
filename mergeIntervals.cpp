#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    if(intervals.size()==1) return intervals;
    int a=intervals[0][0];
    int b=intervals[0][1];
    vector<vector<int>> ans;
    for(int i=1;i<intervals.size();i++)
    {
        if(intervals[i][0]<=b)
        {
               b=(b<=intervals[i][1])?intervals[i][1]:b;
               if(i==intervals.size()-1)
                {
                    vector<int> prev;
                    prev.push_back(a);
                    prev.push_back(b);
                    ans.push_back(prev);
                }
        }
        else
        {
            vector<int> prev;
            prev.push_back(a);
            prev.push_back(b);
            ans.push_back(prev);
            a=intervals[i][0];
            b=intervals[i][1];
            if(i==intervals.size()-1)
            {
                vector<int> prev;
                prev.push_back(a);
                prev.push_back(b);
                ans.push_back(prev);
            }
        }
    }
    return ans;
}
