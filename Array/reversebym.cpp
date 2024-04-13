#include<bits/stdc++.h>
using namespace std;
int display(vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
vector<int> reverseArray(vector<int> &arr , int m)
{
    // Write your code here 
    vector<int>ans;
    for(int i=0;i<=m;i++)
    {
        ans.push_back(arr[i]);
    }     
    int n=arr.size();
    int l=m+1;
    int r=n-1;
    while(l<r)
    {
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        ans.push_back(arr[l]);
        ans.push_back(arr[r]);
        l++;
        r--;
    }	
    return ans;
}

int main()
{
    vector<int>ans={1,4,5,6,6,7,7};
    int n=ans.size();
    int m=3;
    reverseArray(ans,m);
    display(ans);
}