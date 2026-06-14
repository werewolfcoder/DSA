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
    
    int len;
    string s;
    cin>>len>>s;
    int count=0;
    for(int i=1;i<len; i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
    }
    cout<<count;
    

    return 0;
}