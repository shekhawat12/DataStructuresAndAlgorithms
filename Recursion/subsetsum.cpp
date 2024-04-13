#include<bits/stdc++.h>
using namespace std;
int count_subset(int arr[],int n,int sum)
{
    if(n==0)
    return (sum==0)? 1:0;

    return count_subset(arr,n-1,sum)+ count_subset(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int arr[]={10,20,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=25;
    cout<<count_subset(arr,n,sum)<<endl;
    return 0;
}