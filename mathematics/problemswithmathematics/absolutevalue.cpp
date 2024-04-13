#include<bits/stdc++.h>
using namespace std;
int absolute_value(int n)
{
    if(n<0)
    return (-1*n);
    else
    return n;
}
int main()
{
    int n;
    cin>>n;
    cout<<absolute_value(n);
    return 0;
}
