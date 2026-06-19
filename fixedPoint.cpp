#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Your code here
    int n;
    cin>>n;
    //vector<int>arr;
    int ans=-1;
    int tmp;
    for(int i=0; i<n; i++)
    {   
        cin>>tmp;
        if(tmp==i)
        {
            ans=i;
        }
    }
    cout<<ans;





    return 0;
}