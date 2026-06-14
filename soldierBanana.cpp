#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Your code heres
    
    int k,w;
    long n;
    cin>>k>>n>>w;

    long totalCost = k*(w*(w+1)/2);
    cout<<totalCost-n;

    

    return 0;
}