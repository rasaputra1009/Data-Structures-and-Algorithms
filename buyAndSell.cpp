#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices)
{
    int n=prices.size(),maxx=0;
    vector<int> a(n,0),b(n,0);
    a[0]=prices[0];
    b[n-1]=prices[n-1];
    for(int i=1;i<n;i++)
    {
        a[i]=(a[i-1]<prices[i])?a[i-1]:prices[i];
    }
    for(int i=n-2;i>=0;i--)
    {
        b[i]=(b[i]<prices[i+1])?prices[i+1]:b[i];
    }
    for(int i=0;i<n;i++)
    {
        int k=b[i]-a[i];
        maxx=(maxx<k)?k:maxx;
    }
    return maxx;
}