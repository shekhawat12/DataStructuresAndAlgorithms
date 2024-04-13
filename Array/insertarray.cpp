#include<bits/stdc++.h>
using namespace std;
int insert(int arr[],int n,int x,int cap,int pos)
{
    if(n==cap)
    return n;

    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];
        arr[idx]=x;
    }
    return n+1;
}
int main()
{
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=6;
    int cap=7;
    int pos=2;
    cout<<"final size of array: "<<insert(arr,n,x,cap,pos);
}