//count number of nice subarrays. leetcode 1248
#include<bits/stdc++.h>
using namespace std;
int countNiceArray(int arr[],int n,int k)
{
    int nice=0;
    for(int i=0;i<=n-k;i++)
    {
        int count=0;
        for(int j=i;j<i+k;j++)
        {
            if(arr[j]%2!=0)
            {
                count++;
            }
        }
            if(count==k)
            {
                nice++;
            }
        
    }
    return nice;
}
int main()
{
    int arr[]={1,1,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<countNiceArray(arr,n,k);
    return 0;

}