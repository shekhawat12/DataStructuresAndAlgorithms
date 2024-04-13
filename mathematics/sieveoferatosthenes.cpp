// program to find the prime number in a range.
#include<bits/stdc++.h>
using namespace std;

void sieve_of_eratosthenes(int n)
{
    vector<bool> is_prime(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(is_prime[i])
        {
            for(int j=2*i;j<=n;j=j+i)
            {
                is_prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if (is_prime[i])
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve_of_eratosthenes(n);
}