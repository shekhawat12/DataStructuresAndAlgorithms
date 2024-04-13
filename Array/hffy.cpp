#include<bits/stdc++.h>
using namespace std;
vector <int> calculateSpan(int price[], int n)
    {
       vector<int>res;
       int count=0;
       res.push_back(1);
       for(int i=0;i<n;i++)
       {
           for(int j=i-1;j>=0;j++)
           {
               while(price[j]<price[i])
               {
               count++;
               }
               res.push_back(count);
           }
       }
       return res;
    }
int main()
{

}