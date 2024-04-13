#include<bits/stdc++.h>
using namespace std;
// int even_odd(int arr[],int n)  // naive solution.       
// {
//     int count=1;
//     for(int i=0;i<n;i++)
//     {
//        int curr=1;
//        for(int j=i+1;j<n;j++)
//        {
//           if((arr[j]%2==0 && arr[j-1]%2!=0)||(arr[j]%2!=0 && arr[j-1]%2==0))
//           curr++;
//           else
//           break;
//        }
//        count=max(count,curr);
//     }
//     return count;
// }

int even_odd(int arr[],int n)    // use kadane algorithm.. .
{
    int count=0;
    int curr=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0)||(arr[i]%2!=0 && arr[i-1]%2==0))
        {
            curr++;
            count=max(count,curr);
        }
        else
        {
            curr=1;
        }
    }
    return count;
}
int main()
{
    int arr[]={5,10,20,6,3,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<even_odd(arr,n);
}