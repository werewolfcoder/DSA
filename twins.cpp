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
    vector<int>arr(n);
    int sum=0;
    int total=0;
    for(int i=0; i<n; i++)
    {   
        cin>>arr[i];
        total+=arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

    for (int i=0; i<n; i++)
    {
        
            sum+=arr[i];
        if(total-sum<sum)
        {
            cout<<i+1;
            break;
        }    
        
    }



    return 0;
}