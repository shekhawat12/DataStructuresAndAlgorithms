#include<bits/stdc++.h>
using namespace std;
// int lcm(int a,int b)
// {
//     int res=max(a,b);
//     while(res>0)
//     {
//         if(res%a==0 && res%b==0)
//         {
//             return res;
//         }
//         res++;
//     }
// }
// efficient approach    num1*num2 = gcd(num1,num2)* lcm(num1,num2)
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    if(b==0)
    return a;
    else
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
}