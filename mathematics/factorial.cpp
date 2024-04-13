#include<bits/stdc++.h>
using namespace std;
// long long int factorial(int n)
// {
//     long long int res=1;
//     for(int i=2;i<=n;i++)
//     {
//         res=res*i;
//     }
//     return res;
// }

// using recursion
int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}