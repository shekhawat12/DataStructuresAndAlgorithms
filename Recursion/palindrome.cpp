#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string &str,int start,int end)
{
    if(start>=end)
    return true;
    
    return(str[start]==str[end]) && is_palindrome(str,start+1,end-1);
}
int main()
{
    string str;
    cin>>str;
    int n=str.length();
    int start=0;
    int end=n-1;
    cout<<is_palindrome(str,start,end);
}