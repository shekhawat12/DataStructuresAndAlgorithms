#include<bits/stdc++.h>
using namespace std;

int count_digits(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

int main()
{
   int n=3456;
   cout<<count_digits(n);
}