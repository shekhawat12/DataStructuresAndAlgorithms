#include<bits/stdc++.h>
using namespace std;
// method1
// int check_kth_bit(int n,int k)
// {
//     int res=1;
//     for(int i=0;i<(k-1);i++)
//     {
//         res=res*2;
//     }
//     if((n&res)!=0)
//     {
//         cout<<("yes")<<" ";
//     }
//     else
//     {
//         cout<<("no")<<" ";
//     }
// }
// method2
// int check_kth_bit(int n,int k)
// {
//     for(int i=0;i<(k-1);i++)
//     {
//         n=n/2;
//     }
//     if((n&1)!=0)
//     {
//         cout<<("yes")<<" ";
//     }
//     else
//     {
//         cout<<("no")<<" ";
//     }
// }
// efficient method using left shift.
// int check_kth_bit(int n,int k)
// {
//     int x=(1<<(k-1));
//     if((n&x)!=0)
//     cout<<("yes");
//     else
//     cout<<("no");
// }
// efficient method using right shift.
int check_kth_bit(int n,int k)
{
    int x=(n>>(k-1));
    if((1&x)!=0)
    cout<<("yes");
    else
    cout<<("no");
}
int main()
{
    int n,k;
    cin>>n>>k;
    check_kth_bit(n,k);
}