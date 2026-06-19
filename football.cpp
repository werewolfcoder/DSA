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
    string s;
    cin>>s;
    int team1=0;
    int team0 = 0;
    for(char c: s)
    {
        if(c=='1')
        {
            team1++;
            team0=0;
        }
        else if(c=='0')
        {
            team0++;
            team1=0;
        }
        if(team1 >= 7 || team0 >= 7)
        {
            cout<<"YES";
            goto end;
        }
    }
    cout<<"NO";
    end:
    return 0;
}