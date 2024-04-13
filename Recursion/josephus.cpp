// find the winner in the circle.
#include<bits/stdc++.h>
using namespace std;
int josephus(int n,int k)
{
    if(n==1)
    return 0;
    
    else
    return (josephus(n-1,k)+k)%n;
}

int myjos(int n,int k)
{
    return josephus(n,k)+1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<myjos(n,k);
}