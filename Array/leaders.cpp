#include<bits/stdc++.h>
using namespace std;
// vector<int>leaders(int arr[],int n)
// {
//     //naive solution
//     vector<int>ans;
//     for(int i=0;i<n;i++)
//     {
//         bool isleader=true;
//             for(int j=i+1;j<n;j++)
//             { 
//                 if(arr[j]>=arr[i])
//                 {
//                     isleader=false;
//                     break;
//                 }  
//             }
//             if(isleader)
//             {
//                 ans.push_back(arr[i]);
//             }
//     }  
//     return ans;
// }
void leaders(int arr[],int n)
{
    int curr_ldr=arr[n-1];
    cout<<curr_ldr<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(curr_ldr<arr[i])
        {
            curr_ldr=arr[i];
            cout<<curr_ldr<<" ";
        }
    }
}
// int main()  // main function for naive solution.
// {
//     int arr[] = {16, 17, 4, 3, 5, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     vector<int> result = leaders(arr, n);

//     cout << "Leaders in the array: ";
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

int main()
{
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    leaders(arr,n);
}