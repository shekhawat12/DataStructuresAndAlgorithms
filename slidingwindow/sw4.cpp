// Fruit in Basket(leetcode 904)
#include<bits/stdc++.h>
using namespace std;
// int fruit_basket(int arr[],int n,int k) //naive solution
// {
//     int maxlen=0;
//     for(int i=0;i<n;i++)
//     {
//         set<int>st;
//         for(int j=i;j<n;j++)
//         {
//             st.insert(arr[j]);
//             if(st.size()<=k)
//             {
//                 maxlen=max(maxlen,j-i+1);
//             }
//             if(st.size()>k)
//             {
//                 break;
//             }
//         }
//     }
//     return  maxlen;
// }
int fruit_basket(int arr[],int n,int k)
{
    int l=0,r=0;
    int maxlen=0;
    map<int,int>mpp;
    while(r<n)
    {
        mpp[arr[r]]++;
        if(mpp.size()>k)
        {
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0)
            {
                mpp.erase(arr[l]);
            }
            l++;
        }
        if(mpp.size()<=k)
        {
            maxlen=max(maxlen,r-l+1); 
        }
        r++;
    }
    return maxlen;
}
int main()
{
   int arr[]={1,2,3,2,2};
   int n=sizeof(arr)/sizeof(arr[0]);
   int k=2;
   cout<<fruit_basket(arr,n,k);
}