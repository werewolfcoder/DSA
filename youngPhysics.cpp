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
   
    int n;
    cin>>n;
    int sx=0,sy=0,sz=0;
    for(int i=0; i<n; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        sx+=x;
        sy+=y;
        sz+=z;
    }
    
    if(sx==0 && sy==0 && sz==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


    return 0;
}