#include<bits/stdc++.h>
using namespace std;
// int compute_power(int m,int n)
// {
//     int res=1;
//     for(int i=0;i<n;i++)
//     {
//         res=res*m;
//     }
//     return res;
// }
// int compute_power(int m,int n)
// {
//     int temp=1;
//     if(n==0)
//     return 1;
//     if(n%2==0)
//     {
//         for(int i=0;i<n/2;i++)
//         {
//             temp=temp*m;
//         }
//         return temp*temp;
//     }
//     else
//     {
//         for(int i=0;i<n-1;i++)
//         {
//             temp=temp*m;
//         }
//         return temp*m;
//     }

// }
// efficient recursive manner

int compute_power(int m,int n)
{
    if(n==0)
    return 1;
    int temp=compute_power(m,n/2);
    temp=temp*temp;
    if(n%2==0)
    {
        return temp;
    }
    else{
        return temp*m;
    }

}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<compute_power(m,n);


}