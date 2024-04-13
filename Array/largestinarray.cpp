#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int n)
{
    int max=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=i;
        }
    }
    return max;
}
int main()
{
    int arr[]={1,2,3,4,87};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"index of largest element in array"<<largest(arr,n);
}