#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int l=0,m=0,r=n-1;
    while(m<=r)
    {
        if(arr[m]==0)
        {
            swap(arr[m],arr[l]);
            m+=1;
            l+=1;
        }
        else if(arr[m]==1)
        {
            m+=1;
        }
        else if(arr[m]==2)
        {
            swap(arr[m],arr[r]);
            r-=1;
        }
    }
}