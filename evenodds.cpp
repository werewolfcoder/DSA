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
    long long n,k;
    cin>>n;
    cin>>k;
    long long odd = ceil((n+1)/2);
    long long even = n-odd;

    if(k>odd)
    {
        long long  m = k-odd;
        cout<<2*m;
    }
    else
    {
        cout<<2*k-1;
    }



    return 0;
}