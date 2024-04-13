#include<bits/stdc++.h>
using namespace std;
// int count_bit(int n)
// {
//     int res=0;
//     while(n>0)
//     {
//     // if(n%2==1)   // method 1 can use this 
//     // res++;
//     res=res+(n&1);  // can also use this bitwise end operator.
//     n=n/2;
//     }
//     return res;
// }
// EFFICIENT METHOD (BRIAN KERNINGUM'S METHOD)
int count_bit(int n)
{
    int res=0;
    while(n>0)
    {
        n=(n&(n-1));
        res=res+1;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_bit(n);
}