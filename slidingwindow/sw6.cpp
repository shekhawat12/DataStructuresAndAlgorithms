#include<bits/stdc++.h>
using namespace std;
int bin_sum(int arr[],int n,int goal) //naive solution O(n^2).
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum=curr_sum+arr[j];
            if(curr_sum==goal)
            {
                count++;
            }
        }
    }
    return  count;
}
   
// public:   // efficient solution using two pointer and sliding window.
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//         return atmostgoal(nums,goal)-atmostgoal(nums,goal-1);
//     }

// private:
//     int atmostgoal(vector<int>&nums,int goal)
//     {
//         int l=0,r=0;
//         long long int  sum=0;
//         int count=0;
//         int n=nums.size();
//         while(r<n)
//         {
//             sum=sum+nums[r];
//             while(sum>goal && l<=r)
//             {
//                 sum=sum-nums[l];
//                 l++;
//             }
//             count=count+(r-l+1);
//         r++;
//         }
        
//         return count;

//     }

int main()
{
    int arr[]={0,0,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int  goal = 0;
    cout<<bin_sum(arr,n,goal);
    return 0;
}

