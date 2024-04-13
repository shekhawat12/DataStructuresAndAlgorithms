// trailing zero in factorial.
#include<bits/stdc++.h>
using namespace std;
// int trail_zero(int n)
// {
//     int res=1;
//     for(int i=2;i<=n;i++)
//     {
//         res=res*i;
//     }
//     int count=0;
//     while(res%10==0)
//     {
//         count++;
//         res=res/10;
//     }
//     return count;
// }

// efficient way to solve 
int trail_zero(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
        res=res+n/i;
    }
    return res;
}
int main()
{
   int n;
   cin>>n;
   cout<<trail_zero(n);
}