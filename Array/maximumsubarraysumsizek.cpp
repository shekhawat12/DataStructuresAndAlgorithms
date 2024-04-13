#include<bits/stdc++.h>
using namespace std;
int maxx_summ(int Arr[],int N,int K)
{
    sort(Arr,Arr+N);
    int res=0;
    for(int i=N-1;i>=N-K;i--)
    {
        res=res+Arr[i];
    }
    return res;
}
int main()
{
    int arr[]={400,200,300,100};
    int N=sizeof(arr)/sizeof(arr[0]);
    int K=2;
    cout<<maxx_summ(arr,N,K);
}