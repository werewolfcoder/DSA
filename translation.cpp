#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 // Your code heres
    string s,t;
    cin>>s>>t;
    string r="";
    for(int i=s.length()-1; i>=0; i--)
    {
        r+=s[i];
    }
  
    if(r==t)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}