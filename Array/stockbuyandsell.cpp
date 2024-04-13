#include<bits/stdc++.h>
using namespace std;
// int max_profit(int arr[],int n,int start,int end)// naive solution.
// {
//     if(end<=start)
//     return 0;
//     int profit=0;
//     for(int i=start;i<end;i++)
//     {
//         for(int j=i+1;j<=end;j++)
//         {
//             int curr_profit=arr[j]-arr[i]+max_profit(arr,n,start,i-1)+max_profit(arr,n,j+1,end);
//             profit=max(profit,curr_profit);
//         }
//     }
//     return profit;
// }

int max_profit(int arr[],int n) // efficient solution.
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            profit=profit+(arr[i]-arr[i-1]);
        }
    }
    return profit;
}
int main()
{
    int arr[]={1,5,3,8,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<max_profit(arr,n);

}