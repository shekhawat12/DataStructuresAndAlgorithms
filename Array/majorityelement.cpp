#include<bits/stdc++.h>
using namespace std;
// int majority(int arr[],int n) //naive solution
// {
//     for(int i=0;i<n;i++)
//     {
//         int count=1;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//             }
//         }
//         if(count > (n/2))
//         return arr[i];
//     }

//     return -1;
// }
int majority(int arr[],int n) // effiecient solution
{
    int res=0;      // phase -1   to find the candidate (if any)
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
        count++;
        else
        count--;
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    int mycount=0;        // pahse-2 check if the candidate is really a majority.
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
        {
            mycount++;
        }
    }
    if(mycount<=(n/2))
    {
    return arr[res];
    }
    return -1; // return res (for returing the index of the majority element)
}
int main()
{
    int arr[]={1,13,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<majority(arr,n);
}