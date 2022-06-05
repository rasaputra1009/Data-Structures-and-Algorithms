#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{

    long maxx=0,k=0;
    for(int i=0;i<n;i++)
    {
        k+=arr[i];
        if(k>maxx)
        {
            maxx=k;
        }
        if(k<0)
        {
            k=0;
        }
    }
    return maxx;
}