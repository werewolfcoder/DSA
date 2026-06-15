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

    // Your code here
    string s;
    cin>>s;
    int upper=0,lower=0;
    for(char c :s)
    {
        if(isupper(c)) upper++;
        else lower++;
    }
    if(upper>lower)
    {
        for(char &c: s)
        {
            c=toupper(c);
        }
    }
    else
    {
        for(char &c: s)
        {
            c=tolower(c);
        }
    }

   cout<<s;

    return 0;
}