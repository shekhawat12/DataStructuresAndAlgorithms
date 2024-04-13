#include<bits/stdc++.h>
using namespace std;
// naive or less efficient approach.
// bool prime_check(int n)
// {
//    if(n==1)
//    return false;
//    for(int i=2;i*i<=n;i++)
//    {
//     if(n%i==0)
//     return false;
//    }
//    return true;
// }

// more efficient approach.
int prime_check(int n)
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
int main()
{
    int n;
    cin>>n;
    cout<<prime_check(n);
}