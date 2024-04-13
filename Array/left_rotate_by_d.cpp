#include<bits/stdc++.h>
using namespace std;
//naive solution.
//time complexity:theta(nd),spacee space complexity theta(1).
// void left_rotate_by_one(int nums[],int n)
// {
//     int temp=nums[0];
//     for(int i=1;i<n;i++)
//     {
//         nums[i-1]=nums[i];
//     }
//     nums[n-1]=temp;
// }
// void left_rotate_by_d(int nums[],int n,int d)
// {
//     for(int i=0;i<d;i++)
//     {
//        left_rotate_by_one(nums,n);
//     }
// }
// better method. time complexity:theta(n+d),space complexity(d).
//in this method we are going to create a temporary array in which we first store all the elements upto d index
// and then shift all remain elementss to position n-d and then append the elements of temporary array in original array.
// void left_rotate_by_d(int arr[],int n,int d)
// {
//     int temp[d];
//     int m=d%n;
//     for(int i=0;i<m;i++)
//     {
//         temp[i]=arr[i];
//     }
//     for(int i=m;i<n;i++)
//     {
//         arr[i-m]=arr[i];
//     }
//     for(int i=0;i<m;i++)
//     {
//         arr[n-m+i]=arr[i];
//     }
// }

// best efficient method .
void reverse(int arr[],int low,int high)
{
   while(low<high)
   {
    swap(arr[low],arr[high]);
    low++;
    high--;
   }
}
void left_rotate_by_d(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=2;
    left_rotate_by_d(arr,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}