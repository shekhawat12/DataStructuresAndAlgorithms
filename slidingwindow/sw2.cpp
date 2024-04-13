//longest substring without repeating characters.
#include<bits/stdc++.h>
using namespace std;
    int lengthOfLongestSubstring(string s) // naive solution.
    {
        int n=s.length();
        int maxlength=0;
        int hash[256] = {0};
        for(int i=0;i<n;i++)
        {
            fill_n(hash, 256, 0);
            for(int j=i;j<n;j++)
            {
                if(hash[s[j]]==1)
                {
                break;
                }
                hash[s[j]]=1;
                maxlength=max(maxlength,j-i+1);
            }
        }
        return maxlength;
    }

int lengthOfLongestSubstring(string s)
{
    int hash[256]={-1};
    int l=0,r=0;
    int n=s.size();
    int maxlen=0;
    while(r<n)
    {
        if (hash[s[r]]!=-1)
        {
            if(hash[s[r]]>=l)
            {
                l=hash[s[r]]+1;
            }
        }
        int len=r-l+1;
        maxlen=max(len,maxlen);
        hash[s[r]]=r;
        r++;
    }
    return maxlen;

}
int main()
{
    string str;
    cin>>str;
    cout<<lengthOfLongestSubstring(str)<<endl;
}