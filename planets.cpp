/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,c;
    cin>>n>>c;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp[a]++;
    }
    int ans=0;
    for(auto i:mp){
        ans+=min(i.second,c);
    }
    cout<<ans<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
