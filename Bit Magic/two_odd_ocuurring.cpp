#include<bits/stdc++.h>
using namespace std;
// int two_odd_occurring(int nums[],int n)
// {
    // for(int i=0;i<n;i++)
    // {
    //     int count=0;
    //     for(int j=0;j<n;j++)
    //     {
    //         if(nums[i]==nums[j])
    //         count++;
    //     }
    //     if(count%2!=0)
    //     cout<<nums[i]<<" ";
    // }
// }

// EFFICIENT APPROACH TO SOLVYE THIS PROBLEM.
int two_odd_occurring(int arr[],int n)
{
    int res=arr[0];
    for(int i=1;i<n;i++)
    {
        res=res^arr[i];
    }
    int k=(res&(~(res-1)));
    int res1=0,res2=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]&k)!=0)
        res1=res1^arr[i];
        else
        res2=res2^arr[i];
    }
    cout<<res1<<" "<<res2;
}
int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    two_odd_occurring(nums,n);
}