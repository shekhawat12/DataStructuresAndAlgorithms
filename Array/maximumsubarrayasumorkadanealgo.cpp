#include<bits/stdc++.h>
using namespace std;
// int max_sum(int arr[],int n)// naive solution.
// {
//     int res=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         int curr=0;
//         for(int j=i;j<n;j++)
//         {
//             curr=curr+arr[j];
//             res=max(curr,res);
//         }
//     }
//     return res;
// }

int max_sum(int arr[],int n) // efficient solution.  // KADANE ALGORITHM.
{
    int res=arr[0];
    int max_end=arr[0];
    for(int i=1;i<n;i++)
    {
        max_end=max(max_end+arr[i],arr[i]);
        res=max(res,max_end);
    }
    return res;
}
int main()
{ 
    int arr[]={2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<max_sum(arr,n);
}