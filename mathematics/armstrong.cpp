#include<bits/stdc++.h>
using namespace std;
bool armstrong(int n)
{
     int res=0;
     int num=n;
     while(num>0)
     {
        int digit=num%10;
        res=res+(digit*digit*digit);
        num=num/10;
    }
    return (res==n);
}
int main()
{
    int n;
    cin>>n;
    cout<<armstrong(n);
}