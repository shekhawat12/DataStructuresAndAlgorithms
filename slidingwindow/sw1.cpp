// maximum points you can earn from the given array of cards. leetcode 1423
#include<bits/stdc++.h>
using namespace std;
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int n=cardPoints.size();
        int lsum=0;
        for(int i=0;i<k;i++)
        {
            lsum+=cardPoints[i];
        }
        int sum=lsum;
        int rsum=0;
        int j=n-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=cardPoints[i];
            rsum+=cardPoints[j];
            j--;

            sum=max(sum,lsum+rsum);
        }
        return sum;
    }
    int main()
    {
        vector<int>sol={1,2,3,4,5,6,1};
        int k=3;
        cout<<maxScore(sol,k)<<endl;
        return 0;
    }