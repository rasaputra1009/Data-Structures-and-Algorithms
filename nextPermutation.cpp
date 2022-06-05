#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i;
   for(i=n-2;i>=0;i--)
   {
       if(permutation[i]<permutation[i+1])
       {
           break;
       }
   }
    if(i<0)
    {
         reverse(permutation.begin(),permutation.end());
         return permutation;
    }
    else
    {
        for(int j=n-1;j>=0;j--)
        {
            if(permutation[i]<permutation[j])
            {
                swap(permutation[i],permutation[j]);                                                             reverse(permutation.begin()+i+1,permutation.end());
                break;
            }
        }
    }
    return permutation;
    
}