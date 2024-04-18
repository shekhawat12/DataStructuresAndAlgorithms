//subarray with k different integers. leetcode 992
#include<bits/stdc++.h>
using namespace std;
// int subarray_with_k(int nums[],int n,int k)    // naive solution O(n2)
// {
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         map<int,int>mpp;
//         for(int j=i;j<n;j++)
//         {
//             mpp[nums[j]]++;
//             if(mpp.size()==k)
//             {
//                 count++;
//             }
//             else if(mpp.size()>k)
//             {
//                 break;
//             }
//         }
//         mpp.clear();
//     }
//     return count;
// }


int subarray_with_k(int arr[],int n,int k)
{
    int l=0,r=0;
    int count=0;
    map<int,int>mpp;
    while(r<n)
    {
        mpp[arr[r]]++;
        while(mpp.size()>k)
        {
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0)
                mpp.erase(arr[l]);
            l=l+1;
        }
        count=count+(r-l+1);
        r=r+1;
    }
    return count;
}
int find_subarray(int arr[],int n,int k)
{
    return subarray_with_k(arr,n,k)-subarray_with_k(arr,n,k-1);
}
int main()
{
    int arr[]={1,2,1,1,3,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<find_subarray(arr,n,k);
    return 0;
}