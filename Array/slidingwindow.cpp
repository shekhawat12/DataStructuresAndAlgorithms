#include<bits/stdc++.h>
using namespace std;
int max_Sum(int arr[],int n,int k)
{
    int curr=0;
    int i=0;
    int j=k;
    while(i<k)
    {
        curr=curr+arr[i];
        i++;
    }
    int res=curr;
    while(j<n)
    {
        curr=curr+arr[j]-arr[j-k];
        res=max(res,curr);
        j++;
    }
    return res;
}
int main()
{
    int arr[]={1,8,30,-5,20,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    cout<<"Maximum sum of subarray with size "<<k<<" is : "<<max_Sum(arr,n,k);
    return 0;
}