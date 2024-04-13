#include<bits/stdc++.h>
using namespace std;
int frequency(int arr[],int n)// appeoach to solve it in O(n).
{
    int count=1;
    int i=1;
    while(i<n)
    {
        while(i<n && arr[i-1]==arr[i])
        {
            count++;
            i++;
        } 
        cout<<arr[i-1]<<" "<<count<<endl;
        i++;
        count=1;
    }
    if(n==1 || arr[n-1]!=arr[n-2])
    cout<<arr[n-1]<<" "<<1<<endl;
}
int main()
{
    int arr[]={10,10,10,30,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    frequency(arr,n);
    return 0;
}