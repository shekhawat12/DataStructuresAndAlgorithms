#include<bits/stdc++.h>
using namespace std;
int natural_sum(int n)
{
    if(n==0)
    return 0;

    return n+natural_sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<natural_sum(n);
}