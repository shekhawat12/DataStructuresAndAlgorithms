//maximum consecutive ones iii  leetcode 1004
#include<bits/stdc++.h>
using  namespace std;
int max_con1(int arr[],int n,int k) // naive approach
{
    int maxcount=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==0)
            {
                count++;
            }
            if(count<=k)
            {
                int len=j-i+1;
                maxcount=max(maxcount,len);
            }
        }

    }
    return maxcount;
}
// int maxcon1(vector<int>& nums, int k) //efficient solution
// {
//         int n=nums.size();
//         int l=0;
//         int r=0;
//         int maxlen=0;
//         int zero=0;
//         while(r<n)
//         {
//             if(nums[r]==0)
//             {
//                 zero++;
//             }
//             if(zero>k)
//             {
//                if(nums[l]==0)
//                zero--;
//                l++;
//             }
//             if(zero<=k)
//             {
//                 int len=r-l+1;
//                 maxlen=max(len,maxlen); 
//             }
//             r++;
//         }
//         return maxlen;
//     }
int main()
{
    int arr[]={1,1,1,0,0,0,1,1,1,1,0};
    int  n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<max_con1(arr,n,k);
    return 0;
}