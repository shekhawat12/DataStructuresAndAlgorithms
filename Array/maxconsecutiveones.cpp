#include<bits/stdc++.h>
using namespace std;
// int max_one(int arr[],int n)// naive solution
// {
//     int res=0;
//     for(int i=0;i<n;i++)
//     {
//         int count=0;
//         for(int j=i;j<n;j++)
//         {
//         if (arr[j]==1)
//             count++;
//         else
//             break;
        
//         }
//         res=max(res,count);
//     }
//     return res;
// }

int max_one(int arr[],int n)
{
    int res=0;
    int curr=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        curr=0;
        else
        {
        curr++;
        res=max(res,curr);
        }
    }
    return res;
}
int main()
{
    int arr[]={1,0,1,1,1,1,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<max_one(arr,n);
}