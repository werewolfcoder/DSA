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
   int steps[] = {5,4,3,2,1};
   int dist;
   cin>>dist;
    int ans=0;
    int totalDist=0;
   for(int i=0; i<5; i++)
   {
   while(totalDist<dist)
   {
    totalDist+=steps[i];
    ans++;
   }
   }

   cout<<ans;
    

    return 0;
}