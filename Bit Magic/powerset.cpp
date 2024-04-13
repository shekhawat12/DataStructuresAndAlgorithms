#include<bits/stdc++.h>
using namespace std;
void power_set(string s)
{
    int n=s.length();
    int k=(1<<n);
    for(int i=0;i<k;i++)
    {
        cout<<"{";
        for(int j=0;j<n;j++)
        {
            if((i&(1<<j))!=0)
            cout<<s[j];
        }
        cout<<"}";
        cout<<endl;
    }
}
int main()
{
    string s;
    cin>>s;
    power_set(s);
    return 0;
}