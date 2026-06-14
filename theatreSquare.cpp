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
    long long m,n,a;
    cin>>m>>n>>a;
   
    long long x = (m+a-1)/a;
    long long y = (n+a-1)/a;


    cout<<x*y;
    

    return 0;
}