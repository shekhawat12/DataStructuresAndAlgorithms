#include<bits/stdc++.h>
using namespace std;
void move_zero(int arr[],int n) //naive solution
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                swap(arr[i],arr[j]);
                }
            }
        }
    }
}
// void move_zero(int arr[],int n) // efficient method.
// {
//     int res=1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=0)
//         {
//             swap(arr[i],arr[res-1]);
//             res++;
//         }
//     }
// }
int main()
{
    int arr[]={10,5,0,0,8,0,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    move_zero(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
