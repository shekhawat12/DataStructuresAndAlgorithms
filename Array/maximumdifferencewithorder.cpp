#include<bits/stdc++.h>
using namespace std;
//naive solution  O(n^2)
// int max_diff_with_order(int arr[],int n)
// {
//     int res=arr[1]-arr[0];
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//            res=max(res,arr[j]-arr[i]);
//         }
//     }
//     return res;
// }
// efficient solution O(n).
int max_diff_with_order(int arr[],int n)
{ 
    int res=arr[1]-arr[0];
    int minval=arr[0];
    for(int j=1;j<n;j++)
    {
        res=max(res,arr[j]-minval);
        minval=min(minval,arr[j]);
    }
    return res;
}
int main()
{
    int arr[]={2,8,10,5,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<max_diff_with_order(arr,n);
}