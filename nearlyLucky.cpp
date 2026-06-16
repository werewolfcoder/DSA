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

    string n;
    cin >> n;
    int totallucky = 0;
    for (char c : n)
    {
        if (c == '4' || c == '7')
        {

            totallucky++;
        }
    }

        if(totallucky==0)
        {
            cout<<"NO";
        }
        else
        {
    bool flag=true;
    while (totallucky != 0)
    {
        int t = totallucky % 10;
        totallucky /= 10;
        if (t != 4 && t != 7)
        {
            flag = false;
            break;
        }
        
    }

    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
    return 0;
}