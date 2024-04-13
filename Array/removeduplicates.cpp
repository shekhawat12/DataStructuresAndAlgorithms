#include<bits/stdc++.h>
using namespace std;
// int duplicates(int arr[],int n)
// {   // naive solution.
//     int temp[n];   // a temporary array to store all the distinct element from the original array.
//     temp[0]=arr[0];  // first element to temporary array is same as the original array.
//     int res=1; //initially the size of temproray array is 1.
    
//     for(int i=1;i<n;i++)
//     {
//         if(temp[res-1]!=arr[i])
//         {
//            temp[res]=arr[i];
//            res++;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         arr[i]=temp[i];// temparory array to original array.
//     }
//     return res;
// }
int duplicates(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[]={30,30,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the size of new array without duplicates is: "<<duplicates(arr,n);
}