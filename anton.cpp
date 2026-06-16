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

    int n;
    string s;
    cin>>n>>s;
    int a=0,d=0;
    for(char c:s)
    {
        if(c=='A')
        {
            a++;
        }
        else if(c=='D')
        {
            d++;
        }
    }
if(a>d)
{
    cout<<"Anton";
}
else if(d>a)
{
    cout<<"Danik";
}
else
{
    cout<<"Friendship";
}
 

    return 0;
}