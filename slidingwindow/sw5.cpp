//longest subsgtring repeating character.   leetcode  424
#include<bits/stdc++.h>
using namespace std;
// int longest_substr(string s,int k)  //brute force
// {
//     int n=s.size();
//     int maxlen=0;
//     for(int i=0;i<n;i++)
//     {
//         int hash[26]={0};
//         int maxf=0;
//         for(int j=i;j<n;j++)
//         {
//             hash[s[j]-'A']++;
//             maxf=max(maxf,hash[s[j]-'A']);

//             int changes= (j-i+1) - maxf;
//             if(changes<=k)
//             {
//                maxlen=max(maxlen,j-i+1);
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
//     return  maxlen;
// }
int longest_substr(string s,int k)
{
    int n=s.size();
    int l=0,r=0;
    int maxlen=0;
    int hash[26]={0};
    int maxf=0;
    while(r<n)
    {
        hash[s[r]-'A']++;
        maxf=max(maxf,hash[s[r]-'A']);
        if((r-l+1)-maxf > k)
        {
            hash[s[l]-'A']--;
            l++;
        }
        if((r-l+1)-maxf <= k)
        {
            maxlen=max(maxlen,r-l+1);
        }
        r++;
    }
    return maxlen;
}

int main()
{
    string str="AABABBA";
    int k=1;
    cout<<longest_substr(str,k);
}
