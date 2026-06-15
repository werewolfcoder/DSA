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
    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};

    string s;
    string result = "";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    

    for (char c : s)
    {

        if (vowels.find(c)==vowels.end())
        {
            result += '.';
            result += c;
            
        }
    }
    cout << result;

    return 0;
}