#include<bits/stdc++.h>
using namespace std;
// naive appraoch to find the second largest element in array.
// int get_largest(int arr[],int n)
// {
//     int max=0;
//     for(int i=1;i<n;i++)
//     {
//         if(arr[i]>arr[max])
//         {
//             max=i;
//         }
//     }
//     return max;
// }
// int second_largest(int arr[],int n)
// {
//     int largest=get_largest(arr,n);
//     int res=-1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=arr[largest])
//         {
//             if(res==-1)
//             res=i;
//             else if(arr[i]>arr[res])
//             res=i;
//         }
//     }
//     return res;
// }

// efficeient approach (in this we wiil print the second largest element value not its index)
// in this approach if the arr[i] is greater than the largest then the second largest become largest and the arr[i] become the new largest.
int second_largest(int arr[],int n)
{
    int res=INT_MIN;
    int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            res=largest;
            largest=arr[i];
        }
        else if(arr[i]!=largest)
        {
            if(arr[i]>res)
            res=arr[i];
        }
    }
    if(res==INT_MIN)
    {
        return -1;
    }
    return res;
}
int main()
{
    int arr[]={10,10,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"index of second largest element in array: "<<second_largest(arr,n);
}