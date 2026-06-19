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
    int t;
    cin >> t;

    while (t > 0)
    {
        int n;
        cin >> n;

        vector<int> a(n); // Fix: Give the vector a size of 'n'
        int mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        int winners = 0;

        for (int x : a)
        {
            if (x > mn){
                winners++;
            }
        }
        cout << winners << '\n';
        t--;
    }

    return 0;
}