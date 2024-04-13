#include<bits/stdc++.h>
using namespace std;
void subsets(string s,string curr="",int i=0)
{
    if(s.length()==i)
    {
        cout<<curr<<" ";
        return;
    }
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}
int main()
{
    string s;
    cin>>s;
    string curr="";
    int i=0;
    subsets(s,"",0);

}