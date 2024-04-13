#include<bits/stdc++.h>
using namespace std;
// bool sub_sum(int arr[],int sum,int n) //naive solution.
// {
//    for(int i=0;i<n;i++)
//    {
//         int curr_sum=0;
//         for(int j=i;j<n;j++)
//         {
//             curr_sum+=arr[j];
//             if(curr_sum==sum) 
//             return true;
//         }
//    }
//    return false;
// }
bool sub_sum(int arr[],int n,int sum)
{
    int l=0;
    int curr_sum=0;
    for(int r=0;r<n;r++)
    {
        curr_sum+=arr[r];
        while(curr_sum>sum)
        {
           curr_sum-=arr[l];
           l++;
        }
        if(curr_sum==sum)
        {
            return true;
        }
    }
    return false;

}

int main()
{
    int arr[]={4,8,12,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=17;
    cout<<sub_sum(arr,n,sum);
}