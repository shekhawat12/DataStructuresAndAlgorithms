#include<bits/stdc++.h>
using namespace std;
//NAIVE SOLUTION.
bool power_of_two(int n)
{
    if(n==0)
    return false;
    while(n!=1)
    {
        if(n%2!=0)
        {
            return false;
        }
        n=n/2;
    }
    return true;

}

//EFFICIENT SOLUTION.
// bool power_of_two(int n)
// {
    // if n(==0)
    //    return 0;
//     int res=0;
//     while(n>0)
//     {
//     n=(n&(n-1));
//     res=res+1;
//     }
//     return (res==1);

// }
int main()
{
    int n;
    cin>>n;
    cout<<power_of_two(n);
}