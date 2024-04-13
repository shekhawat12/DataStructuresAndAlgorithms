#include<bits/stdc++.h>
using namespace std;
void tower_of_hanoi(int n,char a,char b,char c)// s:source,m:mediator,d:destination.
{
    if(n==1)
    {
    cout<<"move disk 1 from"<<" "<<a<<" "<<"to "<<c<<endl;
    return;
    }

    tower_of_hanoi(n-1,a,c,b);
    cout<<"move disk"<<" "<<n<<" from "<<a<<" to "<<c<<endl;
    tower_of_hanoi(n-1,b,a,c);
}
int main()
{
    int n;
    char a,b,c;
    cin>>n>>a>>b>>c;
    tower_of_hanoi(n,a,b,c);
}