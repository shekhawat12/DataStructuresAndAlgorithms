#include<bits/stdc++.h>
using namespace std;
int display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
void reverse(int arr[],int n)
{
   int low=0;
   int high=n-1;
   while(low<high)
   {
      int temp=arr[low];
      arr[low]=arr[high];
      arr[high]=temp;
      low++;
      high--;
   }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    cout<<"the reversed array is:"<<endl;
    display(arr,n);

}