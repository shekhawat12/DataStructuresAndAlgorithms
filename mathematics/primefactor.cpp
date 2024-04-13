#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    if(n==1) 
    return false;
    if(n==2||n==3)
    return true;
    if(n%2==0 || n%3==0)
    return false;
    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        return false;
    }
    return true;

}
// int prime_factor(int n)
// {
//     for(int i=2;i<n;i++)
//     {
//         if (isprime(i))
//         {
//             int x=i;
//             while(n%x==0)
//             {
//             cout<<(i)<<" ";
//             x=x*i;
//             }
//         }
//     }
  
// }
// efficient way :
// // example:
//    n=450
//    i=2:
//      2
//    n=225
//    i=2:
//    i=3:
//      3,3
//    n=25
//    i=2:
//    i=3:
//    i=4:
//    i=5:
//      5,5
//      so prime factors are 2,2,3,3,5,5
     

// int prime_factor(int n)
// {
//     if(n<=1)
//     return;
//     for(int i=2;i*i<n;i++)
//     {
//         while(n%i==0)
//         {
//             cout<<i<<" ";
//             n=n/i;
//         }
//     }
//     if(n>1)
//     return n;
// }

// in above efficient way we can skip many iterate by optimize it in a way like:
int prime_factor(int n)
{
    while(n%2==0)
    {
        cout<<2<<" ";
        n=n/2;
    }
    while(n%3==0)
    {
        cout<<3<<" ";
        n=n/3;
    }
    for(int i=5;i*i<=n;i++)
    {
    while(n%i==0)
    {
        cout<<i<<" ";
        n=n/i;
    }
    while(n%(i+2)==0)
    {
        cout<<(i+2)<<" ";
        n=n/(i+2);
    }
    }
    if(n>3)
    return n;
}
int main()
{
    int n;
    cin>>n;
     prime_factor(n);
}