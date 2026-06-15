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
    int num,times;
    cin>>num>>times;

    while(times>0)
    {
        if(num%10==0)
        {
            num/=10;
        }
        else
        {
            num--;
        }
        times--;
    }
    cout<<num;

    return 0;
}