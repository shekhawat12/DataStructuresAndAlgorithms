#include<bits/stdc++.h>
using namespace std;
void left_rotate_by_one(int nums[],int n)
{
    int temp=nums[0];
    for(int i=1;i<n;i++)
    {
        nums[i-1]=nums[i];
    }
    nums[n-1]=temp;

}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    left_rotate_by_one(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}