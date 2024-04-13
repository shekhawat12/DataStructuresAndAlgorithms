#include<bits/stdc++.h>
using namespace std;
// NAIVE SOLUTION
// int one_odd_occurring(int nums[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int count=0;
//         for(int j=0;j<n;j++)
//         {
//             if(nums[i]==nums[j])
//             count++;
//         }
//         if (count%2!=0)
//         return nums[i];
//     }
// }

//EFFICIENT SOLUTION   (using the xor operator)
int one_odd_occurring(int nums[],int n)
{
    int res=nums[0];
    for(int i=1;i<n;i++)
    { 
        res=res^nums[i];
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<one_odd_occurring(nums,n);
}