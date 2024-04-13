#include<bits/stdc++.h>
using namespace std;
bool check_sorted(int arr[],int n)
{
    //naive solution
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        return false;
    }
    return true;
}
int main()
{
    int arr[]={90,80,100,70,40,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<check_sorted(arr,n);
}