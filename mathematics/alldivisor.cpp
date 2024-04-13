#include<bits/stdc++.h>
using namespace std;
// int divisor(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<" ";
//         }
//     }
// }
// efficient way (but divisor appears in unsorted order.)
// int divisor(int n)
// {
//     for(int i=1;i*i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<i<<" ";
//             if(i!=n/i)
//             {
//                 cout<<n/i<<" ";
//             }
//         }
//     }
// }
// for divisor appear in sorted order we can optimize the above function via:
int divisor(int n)
{ 
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
        cout<<i<<" ";
        }
    }
    for(i*i<=n;i>=1;i--)
    {
        if(n%i==0 )
        {
            cout<<n/i<<" " ;
        }
    }
    
}
int main()
{
    int n;
    cin>>n;
    divisor(n);
}