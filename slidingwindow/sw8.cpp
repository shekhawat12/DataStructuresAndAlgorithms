// longest substring with atmost k distinct character.
#include<bits/stdc++.h>
using namespace std;
int max_len(string s,int k)
{
    int n=s.length();
    int maxlen=0;
    map<char,int>mpp;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            mpp[s[j]]++;
            if(mpp.size()<=k)
            {
                maxlen=max(maxlen,j-i+1);
            }
            else
            {
                break;
            }
        }
    }
    return maxlen;
}
// int kDistinctChars(int k, string &str)  // efficient solution.
// {
//     int l=0,r=0;
//     int maxlen=0;
//     map<char,int>mpp;
//     int n=str.length();
//     while(r<n)
//     {
//         mpp[str[r]]++;
//         while(mpp.size()>k)
//         {
//             mpp[str[l]]--;
//             if(mpp[str[l]]==0)
//             {
//                 mpp.erase(str[l]);
//             }
//             l=l+1;
//         }
//             maxlen=max(maxlen,r-l+1);
//         r=r+1;
//     }
//     return maxlen;
// }
int main()
{
    string s="aaabbccd";
    int k=2;
    cout<<max_len(s,k);
}