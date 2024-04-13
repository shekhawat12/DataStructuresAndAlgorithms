#include<bits/stdc++.h>
using namespace std;
int max_sum_cir(int arr[],int n) // naive solution4.
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        int curr_max=arr[i];
        int curr_sum=arr[i];
        for(int j=1;j<n;j++)
        {
            int index=(i+j)%n;
            curr_sum+=arr[index];
            curr_max=max(curr_max,curr_sum);
        }
        res=max(curr_max,res);
    }
    return res;
}
int main()
{
    int arr[]={3,-4,5,6,-8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<max_sum_cir(arr,n);
}