#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int rope_cut(int n,int a,int b,int c)
{
    if(n==0)
    return 0;
    if(n<0)
    return -1;

    int res = max(rope_cut(n-a,a,b,c),max(rope_cut(n-b,a,b,c),rope_cut(n-c,a,b,c)));
    if(res==-1)
    return -1;

    return res+1;
}
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<rope_cut(n,a,b,c);
}
