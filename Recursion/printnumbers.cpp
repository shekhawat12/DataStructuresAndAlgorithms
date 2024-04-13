#include<bits/stdc++.h>
using namespace std;
// void print_numbers(int n)// print numbers from N to 1. this is an example of tail recursion.
// {
//     if(n==0)
//     return ;
//     cout<<n<<" ";
//     print_numbers(n-1);
// }
void print_numbers(int n)
{
    if(n==0)
    return;
    print_numbers(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    print_numbers(n);
}

// Tail recursion is that recursion where parent function has nothing more to do when child function is over.