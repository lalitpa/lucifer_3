
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
vector<int>v{3,1,1000000};
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n=v.size()+1;
    int m=accumulate(v.begin(),v.end(),0)+1;
    vector<vector<bool>>dp(n,vector<bool>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j==0)
            {
                dp[i][j]=true;
            }
            else if(i==0)
            {
                dp[i][j]=false;
            }
            else if(v[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]= dp[i-1][j] || dp[i-1][j-v[i-1]];
            }
        }
    }
    int diff;
    for(int j=(m-1)/2;j>=0;j--)
    {
        if(dp[n-1][j]==true)
        {
            diff=(m-1)-2*j;
            break;
        }
    }
    cout<<diff;
    return 0;
}